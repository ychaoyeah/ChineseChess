#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>

#include "HeadIcon.h"

namespace Ui {
class MainDlg;
}

class MainDlg : public QDialog
{
    Q_OBJECT

public:
    explicit MainDlg(QWidget *parent = nullptr);
    ~MainDlg();

private:
    Ui::MainDlg *ui;

    /// 头像控件
    HeadIcon *_playerIcon;
    HeadIcon *_aiIcon;
};

#endif // MAINDLG_H
