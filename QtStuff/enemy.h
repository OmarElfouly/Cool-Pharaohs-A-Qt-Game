#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QMediaPlayer>
#include <QAudioOutput>

class Enemy: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(int type,QGraphicsItem * parent = 0);
    ~Enemy();
    QPointF getPos();
    int Type;
    bool active;
    int oldVal;
public slots:
    void move();
    void checkActive();
private:
    QMediaPlayer * enemyBulletSound;
    QAudioOutput * enemyBulletoutput;

};

#endif // ENEMY_H
