#include "principal.h"
#include "ui_principal.h"

#define caminho "C:\\Users\\Felipe Sousa\\Bancos\\bdTeste.sqlite"

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
    ui->pbAdd->setToolTip("Adicionar");
    ui->pbVisu->setToolTip("Visualizar");
    ui->leBuscar->setToolTip("Buscar");
    banco = QSqlDatabase::addDatabase("QSQLITE");
    banco.setDatabaseName(caminho);
    banco.open();
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->tableWidget->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    QSqlQuery buscar("select * from livros");
    while(buscar.next())
        qDebug() << buscar.value(0).toString() << "   " << buscar.value(1).toString();
}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_pbAdd_clicked()
{
    ui->leNome->setFocus();
    if(ui->stackedWidget->currentIndex() == 1)
        return;
    apagarForm();
    ui->stackedWidget->setCurrentIndex(1);
}

void Principal::on_pbVisu_clicked()
{
    ui->leBuscar->setFocus();
    if (ui->stackedWidget->currentIndex() == 2)
        return;
    apagarTabela();
    ui->stackedWidget->setCurrentIndex(2);
}

void Principal::apagarForm()
{
    ui->leNome->clear();
    ui->leLocal->clear();
    ui->leObs->clear();
}

void Principal::apagarTabela()
{
    ui->leBuscar->clear();
    ui->tableWidget->setRowCount(0);
}

void Principal::on_pbSalvar_clicked()
{
    if(ui->leNome->text() == ""){
        QMessageBox::warning(this,"Aviso.","Preencha  os campos obrigatorios(nome/local).");
        ui->leNome->setFocus();
        return;
    }
    if(ui->leLocal->text() == ""){
        QMessageBox::warning(this,"Aviso.","Preencha  os campos obrigatorios(nome/local).");
        ui->leLocal->setFocus();
        return;
    }
    QSqlQuery proteRep("select codigo from livros where nome ilike " + ui->leNome->text());
    if(proteRep.numRowsAffected() > 0){
        int y = QMessageBox::question(this,"Aviso","Já existe um livro cadastrado, com esse nome. Deseja continuar?",QMessageBox::Ok,QMessageBox::Cancel);
        if(y == QMessageBox::Cancel)
            return;
    }
    if(ui->leObs->text().isEmpty())
        ui->leObs->setText("Nada");
    int codigo;
    QSqlQuery buscarCodigo("select MAX(codigo) from livros");
    while(buscarCodigo.next())
        codigo = buscarCodigo.value(0).toInt() + 1;
    QSqlQuery insertLivro("INSERT INTO livros VALUES("+QString::number(codigo)+",'"+ui->leNome->text()+"','"+ui->leLocal->text()+"','"+ui->leObs->text()+"')");
    qDebug() << "insert: " << insertLivro.lastQuery();
    if(insertLivro.numRowsAffected() > 0){
        QMessageBox::information(this,"Aviso.","Livro cadastrado com sucesso.");
        apagarForm();
    }
    else
        QMessageBox::warning(this,"Aviso.","ERRO AO SALVAR:\n" + insertLivro.lastError().text());
}

void Principal::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()){
    case Qt::Key_Return:
        if(ui->stackedWidget->currentIndex() == 2)
            on_pbIr_clicked();
        break;
    }
}

void Principal::on_pbIr_clicked()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery preencherTabela("select * from livros where nome like lower('%"+ui->leBuscar->text()+"%') or nome like upper('%"+ui->leBuscar->text()+"%') ");
    qDebug() << "Last Query: " << preencherTabela.lastQuery();
    int linha = 0;
    while(preencherTabela.next()){
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
        for(int i = 0; i < 4; i++)
            setTabela(preencherTabela.value(i).toString(),linha,i);
        linha++;
    }
    ColunsAlternativecolor();
}

void Principal::setTabela(QString valor, int linha, int col)
{
    QTableWidgetItem* item = new QTableWidgetItem();
    item->setFlags(Qt::NoItemFlags | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    item->setText(valor);
    ui->tableWidget->setItem(linha,col,item);
}

void Principal::on_pbExcluir_clicked()
{
    QList<QTableWidgetItem *> selections =  ui->tableWidget->selectedItems();
    if (selections.size() == 0) {
        QMessageBox::information(this, "Aviso","Nenhum item selecionado, selecione algum item para excluir");
        return;
    }
    int botaoClicado = QMessageBox::question(this,"Aviso","Deseja realmente apagar selecionado(s)?", QMessageBox::Ok, QMessageBox::Cancel);
    if(botaoClicado == QMessageBox::Ok){
        QString cod;
        for(int i = 0; i < selections.size(); i++){
            if (i == 0 || i%4 == 0) {
                cod = selections.at(i)->text();
                QSqlQuery deletar("DELETE FROM livros WHERE codigo ="+ cod);
                ui->tableWidget->removeRow(selections.at(i)->row());
            }
        }
    }
}

void Principal::ColunsAlternativecolor()
{
    for(double i = 0 ; i< ui->tableWidget->columnCount(); i++){
        QStringList cor,cor2;
        double j;
        j = i/2;
        cor.append(QString::number(j,'f',2));
        cor2.append(cor.join("|").split("."));
        if (cor2.at(1)=="00")
            for(double l = 0 ; l< ui->tableWidget->rowCount(); l++)
                ui->tableWidget->item(l,i)->setBackgroundColor(QColor(172, 255, 127, 120));
    }
}

void Principal::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)
{
    ui->twEditar->setColumnCount(1);
    QString nome,local,obs;
    codigoEdit = ui->tableWidget->item(item->row(),0)->text().toInt();
    nome = ui->tableWidget->item(item->row(),1)->text();
    local = ui->tableWidget->item(item->row(),2)->text();
    obs = ui->tableWidget->item(item->row(),3)->text();
    QTableWidgetItem* itemEditarNome = new QTableWidgetItem();
    itemEditarNome->setFlags(Qt::NoItemFlags | Qt::ItemIsEnabled | Qt::ItemIsEditable);
    itemEditarNome->setText(nome);
    ui->twEditar->setItem(0,0,itemEditarNome);
    QTableWidgetItem* itemEditarLocal = new QTableWidgetItem();
    itemEditarLocal->setFlags(Qt::NoItemFlags | Qt::ItemIsEnabled | Qt::ItemIsEditable);
    itemEditarLocal->setText(local);
    ui->twEditar->setItem(1,0,itemEditarLocal);
    QTableWidgetItem* itemEditarObs = new QTableWidgetItem();
    itemEditarObs->setFlags(Qt::NoItemFlags | Qt::ItemIsEnabled | Qt::ItemIsEditable);
    itemEditarObs->setText(obs);
    ui->twEditar->setItem(2,0,itemEditarObs);
    ui->stackedWidget_2->setCurrentIndex(1);
}

void Principal::on_pbEditar_clicked()
{

}
