#include "health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    health = 100;

    setPlainText(QString("Health: ")+ QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",20));
}

void Health::decrease()
{
    health--;
    setPlainText(QString("Health: ")+ QString::number(health));
}

int Health::getHealth()
{
    return health;
}