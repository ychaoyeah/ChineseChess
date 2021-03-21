#include "HeadIcon.h"
#include "ui_HeadIcon.h"

HeadIcon::HeadIcon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HeadIcon)
{
    ui->setupUi(this);
}

HeadIcon::~HeadIcon()
{
    delete ui;
}

void HeadIcon::setText(const QString &text)
{
    ui->textLabel->setText(text);
}

void HeadIcon::setImg(const QString &stylestr)
{
    ui->imgLabel->setStyleSheet(stylestr);
}

void HeadIcon::overThrow()
{
    ui->textLabel->setStyleSheet(ui->imgLabel->styleSheet());
    ui->imgLabel->setText(ui->textLabel->text());

    ui->imgLabel->setStyleSheet("");
    ui->textLabel->setText("");

    QVBoxLayout *lyout = (QVBoxLayout *)layout();
    lyout->setStretch(0, 4);
    lyout->setStretch(1, 1);
}
