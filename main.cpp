#include <QApplication>
#include "MainDlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainDlg dlg;
    dlg.show();

    return a.exec();
}
