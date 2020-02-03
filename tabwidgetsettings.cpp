#include "login.h"
#include "tabwidgetsettings.h"
#include "ui_tabwidgetsettings.h"
#include "stale.h"
#include <QSettings>


TabWidgetSettings::TabWidgetSettings(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::TabWidgetSettings)
{
    ui->setupUi(this);
    QList<Login> loginy;
    QSettings settings;
}

TabWidgetSettings::~TabWidgetSettings()
{
    delete ui;
}

void TabWidgetSettings::on_pushButton_4_clicked()
{

}

void TabWidgetSettings::on_pushButton_3_clicked()
{
    ui->host->setText("");
    ui->haslo->setText("");
    ui->login->setText("");
    ui->port->setValue(0);
    ui->wysylajacy->setText("");
    ui->czySSL->setChecked(false);
}

void TabWidgetSettings::on_pushButton_2_clicked()
{
    QMetaObject::invokeMethod( this, "close", Qt::QueuedConnection );
}

void TabWidgetSettings::loadSettings()
{
 //QSettings settings(new Stale()., QSettings::NativeFormat);
}
