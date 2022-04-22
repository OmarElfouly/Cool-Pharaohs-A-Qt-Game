#include "health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    health = 3;

    setPlainText(QString("Lives: ")+ QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",20));
}

void Health::decrease()
{
    health--;
    setPlainText(QString("Lives: ")+ QString::number(health));
}

int Health::getHealth()
{
    return health;
}
