#include "ChessBorad.h"

#include <QPainter>

ChessBorad::ChessBorad(QWidget *parent) : QWidget(parent)
{

}

void ChessBorad::paintEvent(QPaintEvent *e)
{
    int ChessR = rect().width() / 9; // 不留空

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // 画上方竖线
    for (int i = 0; i < 9; i++)
    {
        painter.drawLine(ChessR / 2 + i * ChessR, ChessR / 2, ChessR / 2 + i * ChessR, ChessR / 2 + 4 * ChessR);
    }

    // 画下方竖线
    for (int i = 0; i < 9; i++)
    {
        painter.drawLine(ChessR / 2 + i * ChessR, ChessR / 2 + 5 * ChessR, ChessR / 2 + i * ChessR, ChessR / 2 + 9 * ChessR);
    }

    // 补楚河汉界4-5行连接线
    painter.drawLine(ChessR / 2, ChessR / 2 + 4 * ChessR, ChessR / 2, ChessR / 2 + 5 * ChessR);
    painter.drawLine(ChessR / 2 + + 8 * ChessR, ChessR / 2 + 4 * ChessR, ChessR / 2 + 8 * ChessR, ChessR / 2 + 5 * ChessR);

    // 画士线
    painter.drawLine(ChessR / 2 + ChessR * 3, ChessR / 2, ChessR / 2 + ChessR * 5, ChessR / 2 + ChessR * 2);
    painter.drawLine(ChessR / 2 + ChessR * 5, ChessR / 2, ChessR / 2 + ChessR * 3, ChessR / 2 + ChessR * 2);
    painter.drawLine(ChessR / 2 + ChessR * 3, ChessR / 2 + 7 * ChessR, ChessR / 2 + ChessR * 5, ChessR / 2 + ChessR * 9);
    painter.drawLine(ChessR / 2 + ChessR * 5, ChessR / 2 + 7 * ChessR, ChessR / 2 + ChessR * 3, ChessR / 2 + ChessR * 9);

    // 画横线
    for (int i = 0; i < 10; i++)
    {
        painter.drawLine(ChessR / 2, ChessR / 2 + i * ChessR, ChessR / 2 + 8 * ChessR, ChessR / 2 + ChessR * i);
    }
}
