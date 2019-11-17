/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created: Tue 19. Feb 17:56:24 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lbNome;
    QLineEdit *leNome;
    QLabel *lbLocal;
    QLineEdit *leLocal;
    QLabel *lbObs;
    QLineEdit *leObs;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbSalvar;
    QWidget *page_3;
    QTableWidget *tableWidget;
    QPushButton *pbIr;
    QLineEdit *leBuscar;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QWidget *page_5;
    QTableWidget *twEditar;
    QPushButton *pbEditar;
    QPushButton *pbExcluir;
    QPushButton *pbVisu;
    QPushButton *pbAdd;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(983, 493);
        centralWidget = new QWidget(Principal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 171, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(60, 10, 16, 431));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 30, 991, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(79, 49, 891, 411));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 221, 107));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        lbNome = new QLabel(layoutWidget);
        lbNome->setObjectName(QString::fromUtf8("lbNome"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lbNome);

        leNome = new QLineEdit(layoutWidget);
        leNome->setObjectName(QString::fromUtf8("leNome"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNome);

        lbLocal = new QLabel(layoutWidget);
        lbLocal->setObjectName(QString::fromUtf8("lbLocal"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lbLocal);

        leLocal = new QLineEdit(layoutWidget);
        leLocal->setObjectName(QString::fromUtf8("leLocal"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leLocal);

        lbObs = new QLabel(layoutWidget);
        lbObs->setObjectName(QString::fromUtf8("lbObs"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbObs);

        leObs = new QLineEdit(layoutWidget);
        leObs->setObjectName(QString::fromUtf8("leObs"));

        formLayout->setWidget(2, QFormLayout::FieldRole, leObs);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbSalvar = new QPushButton(layoutWidget);
        pbSalvar->setObjectName(QString::fromUtf8("pbSalvar"));
        pbSalvar->setStyleSheet(QString::fromUtf8(":hover{\n"
"	color: rgb(255, 255, 255);\n"
"    border-width:2px;\n"
"	border-color: rgb(0, 108, 130);\n"
"	background-color: rgb(0, 114, 198);\n"
"border-style: solid;\n"
" }\n"
"\n"
""));

        horizontalLayout->addWidget(pbSalvar);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        tableWidget = new QTableWidget(page_3);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 30, 561, 351));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->verticalHeader()->setVisible(false);
        pbIr = new QPushButton(page_3);
        pbIr->setObjectName(QString::fromUtf8("pbIr"));
        pbIr->setGeometry(QRect(120, 0, 31, 23));
        pbIr->setStyleSheet(QString::fromUtf8(":hover{\n"
"	color: rgb(255, 255, 255);\n"
"    border-width:2px;\n"
"	border-color: rgb(0, 108, 130);\n"
"	background-color: rgb(0, 114, 198);\n"
"border-style: solid;\n"
" }\n"
""));
        leBuscar = new QLineEdit(page_3);
        leBuscar->setObjectName(QString::fromUtf8("leBuscar"));
        leBuscar->setGeometry(QRect(0, 1, 113, 20));
        stackedWidget_2 = new QStackedWidget(page_3);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(689, 30, 201, 161));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        twEditar = new QTableWidget(page_5);
        if (twEditar->rowCount() < 3)
            twEditar->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twEditar->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twEditar->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twEditar->setVerticalHeaderItem(2, __qtablewidgetitem6);
        twEditar->setObjectName(QString::fromUtf8("twEditar"));
        twEditar->setGeometry(QRect(10, 0, 181, 131));
        twEditar->horizontalHeader()->setVisible(false);
        pbEditar = new QPushButton(page_5);
        pbEditar->setObjectName(QString::fromUtf8("pbEditar"));
        pbEditar->setGeometry(QRect(110, 138, 75, 23));
        pbEditar->setStyleSheet(QString::fromUtf8(":hover{\n"
"	color: rgb(255, 255, 255);\n"
"    border-width:2px;\n"
"	border-color: rgb(0, 108, 130);\n"
"	background-color: rgb(0, 114, 198);\n"
"border-style: solid;\n"
" }\n"
"\n"
"\n"
""));
        stackedWidget_2->addWidget(page_5);
        pbExcluir = new QPushButton(page_3);
        pbExcluir->setObjectName(QString::fromUtf8("pbExcluir"));
        pbExcluir->setGeometry(QRect(571, 358, 75, 23));
        pbExcluir->setStyleSheet(QString::fromUtf8(":hover{\n"
"    border-width:2px;\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 108, 130);\n"
"	background-color: rgb(0, 114, 198);\n"
"border-style: solid;\n"
" }\n"
"\n"
""));
        stackedWidget->addWidget(page_3);
        pbVisu = new QPushButton(centralWidget);
        pbVisu->setObjectName(QString::fromUtf8("pbVisu"));
        pbVisu->setGeometry(QRect(3, 90, 61, 41));
        pbVisu->setStyleSheet(QString::fromUtf8(":hover{\n"
"    border-width:2px;\n"
"	border-color: rgb(0, 108, 130);\n"
"	background-color: rgb(0, 114, 198);\n"
"border-style: solid;\n"
" }\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbVisu->setIcon(icon);
        pbVisu->setIconSize(QSize(24, 24));
        pbAdd = new QPushButton(centralWidget);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        pbAdd->setGeometry(QRect(4, 40, 61, 41));
        pbAdd->setStyleSheet(QString::fromUtf8(":hover{\n"
"    border-width:2px;\n"
"	border-color: rgb(0, 108, 130);\n"
"	background-color: rgb(0, 114, 198);\n"
"border-style: solid;\n"
" }\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon1);
        pbAdd->setIconSize(QSize(24, 24));
        Principal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Principal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 983, 21));
        Principal->setMenuBar(menuBar);

        retranslateUi(Principal);

        stackedWidget->setCurrentIndex(2);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Principal", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Principal", "Biblioteca Virtual:", 0, QApplication::UnicodeUTF8));
        lbNome->setText(QApplication::translate("Principal", "Nome", 0, QApplication::UnicodeUTF8));
        lbLocal->setText(QApplication::translate("Principal", "Local", 0, QApplication::UnicodeUTF8));
        lbObs->setText(QApplication::translate("Principal", "Observa\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        pbSalvar->setText(QApplication::translate("Principal", "Salvar", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Principal", "Codigo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Principal", "Nome", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Principal", "Local", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Principal", "Observa\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        pbIr->setText(QApplication::translate("Principal", "Ir", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = twEditar->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Principal", "Nome:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = twEditar->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Principal", "Local:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = twEditar->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Principal", "Obs:", 0, QApplication::UnicodeUTF8));
        pbEditar->setText(QApplication::translate("Principal", "Salvar", 0, QApplication::UnicodeUTF8));
        pbExcluir->setText(QApplication::translate("Principal", "Excluir", 0, QApplication::UnicodeUTF8));
        pbVisu->setText(QString());
        pbAdd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
