#ifndef HEADICON_H
#define HEADICON_H

#include <QWidget>

namespace Ui {
class HeadIcon;
}

class HeadIcon : public QWidget
{
    Q_OBJECT

public:
    explicit HeadIcon(QWidget *parent = nullptr);
    ~HeadIcon();

public:
    void setText(const QString &text); // 设置账号名称
    void setImg(const QString &stylestr); // 设置头像图片

    void overThrow(); // 上下倒置

private:
    Ui::HeadIcon *ui;
};

#endif // HEADICON_H
