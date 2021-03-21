#ifndef CHESSBORAD_H
#define CHESSBORAD_H

#include <QWidget>

class ChessBorad : public QWidget
{
    Q_OBJECT
public:
    explicit ChessBorad(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *e);

signals:

};

#endif // CHESSBORAD_H
