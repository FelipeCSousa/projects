#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QKeyEvent>
#include <QMessageBox>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QTableWidgetItem>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT
    
public:
    int codigoEdit;
    void ColunsAlternativecolor();
    void keyPressEvent(QKeyEvent *event);
    void apagarTabela();
    void apagarForm();
    QSqlDatabase banco;
    explicit Principal(QWidget *parent = 0);
    ~Principal();
    
private slots:
    void on_pbAdd_clicked();

    void on_pbVisu_clicked();

    void on_pbSalvar_clicked();

    void on_pbIr_clicked();

    void on_pbExcluir_clicked();

    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

    void on_pbEditar_clicked();

private:
    void setTabela(QString valor, int linha, int col);
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
