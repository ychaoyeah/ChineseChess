#include "MainDlg.h"
#include "ui_MainDlg.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

MainDlg::MainDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDlg)
{
    ui->setupUi(this);

    setWindowTitle("中国象棋");

    int appH = 640;
    int appW = 360;

    int txCtrlHeight = appH / 6; // 头像控件高度
    int txHeight = txCtrlHeight / 5 * 4; // 头像高度
    int spaceWidth = appW - txHeight;

    // 设置布局
    _aiIcon = new HeadIcon(this);
    _aiIcon->setText("简单电脑");
    _aiIcon->setImg("border-image: url(:/cc/Imgs/tx/SimpleLevel.png);");
    QHBoxLayout *hLayout1 = new QHBoxLayout;
    hLayout1->addWidget(_aiIcon);
    hLayout1->addSpacing(spaceWidth);

    _playerIcon = new HeadIcon(this);
    _playerIcon->setText("挑战者");
    _playerIcon->setImg("border-image: url(:/cc/Imgs/tx/Player.png);");
    _playerIcon->overThrow();
    QHBoxLayout *hLayout2 = new QHBoxLayout;
    hLayout2->addSpacing(spaceWidth);
    hLayout2->addWidget(_playerIcon);

    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addItem(hLayout1);
    vLayout->addWidget(new QWidget(this));
    vLayout->addItem(hLayout2);
    vLayout->setStretch(0, 1);
    vLayout->setStretch(1, 4);
    vLayout->setStretch(2, 1);
    setLayout(vLayout);
}

MainDlg::~MainDlg()
{
    delete ui;
}
