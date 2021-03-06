#include "mainwindow.h"
#include "sendemail.h"
#include "tabwidgetsettings.h"
#include "ui_mainwindow.h"
#include "wiadomosc.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->maile->setColumnCount(4);
    ui->maile->setHorizontalHeaderLabels(QStringList()<< tr("Temat")<< tr("Nadawca")<< tr("Data")<< tr("Etykieta"));
    ui->maile->setSelectionBehavior(QAbstractItemView::SelectRows);
    dodajNowyMailDoTabeli("","","","");
    dodajNowyMailDoTabeli("","","","");
    //Wiadomosc *ws = new Wiadomosc("temat","nullptr","ty@email.pl","2020.01.31 16:26","wazne","ps");
    Wiadomosc w;
    ui->maile->setEditTriggers(QAbstractItemView::NoEditTriggers);
    zaladujKontaDoTabeli();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    sendEmail = new SendEmail();
    sendEmail->show();

}

void MainWindow::on_actionObs_uga_kont_mailowych_triggered()
{
    tabWidgetSettings = new TabWidgetSettings();
    tabWidgetSettings->show();
}

void MainWindow::dodajNowyMailDoTabeli(QString temat, QString nadawca, QString Data, QString etykieta)
{
   ui->maile->setRowCount(ui->maile->rowCount()+1);
   ui->maile->setItem(ui->maile->rowCount()-1, 1, new QTableWidgetItem("Hello"));
}

void MainWindow::zaladujKontaDoTabeli(){
    qDebug()<<"ladowanie maili";
}



void MainWindow::on_maile_cellClicked(int row, int column)
{
    qDebug()<<"kliknieta komorka: "<<row;
}
