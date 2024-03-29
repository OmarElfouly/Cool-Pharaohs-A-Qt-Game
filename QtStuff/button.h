#ifndef BUTTON_H
#define BUTTON_H
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QWidget>
class Button:public QWidget, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Button(QString name, QGraphicsItem * parent = 0);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    bool volCheck;
signals:
    void clicked();
private:
    QGraphicsTextItem * text;
};

#endif // BUTTON_H
