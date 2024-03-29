#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "enemy.h"
#include "game.h"
#include "wall.h"
#include "enemybullet.h"
#include "bedrockwall.h"
#include "door.h"
extern Game * game;

EnemyBullet::EnemyBullet(int rotateCheck, int type, QGraphicsItem* parent): QObject(), QGraphicsPixmapItem(parent)
{
    QTimer * timer = new QTimer(this);
    setPixmap(QPixmap(":/images/bullet.png").scaled(10,10));

    if(rotateCheck == 180){
    connect(timer, SIGNAL(timeout()),this,SLOT(moveUp()));
    }else if(rotateCheck == 0){
    connect(timer, SIGNAL(timeout()),this,SLOT(moveDown()));
    }else if(rotateCheck == 90){
    connect(timer, SIGNAL(timeout()),this,SLOT(moveLeft()));
    }else if(rotateCheck == 270){
    connect(timer, SIGNAL(timeout()),this,SLOT(moveRight()));
    }
    timer->start(10);
    enemyType = type;
}

void EnemyBullet::moveUp()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i =0;i<colliding_items.size();i++){
        if(typeid(*(colliding_items[i]))==typeid(Player)){
            scene()-> removeItem(this);
            delete this;
            game->health->decrease();


            return;
        }
        if(enemyType == 0 && (typeid(*(colliding_items[i]))==typeid(Wall) || typeid(*(colliding_items[i]))==typeid(BedrockWall))){

            scene()-> removeItem(this);
            delete this;
            return;
        }
        if(enemyType == 1 && typeid(*(colliding_items[i]))==typeid(BedrockWall)){

            scene()-> removeItem(this);
            delete this;
            return;
        }
        if(typeid(*(colliding_items[i]))==typeid(Door)){

            scene()-> removeItem(this);
            delete this;
            return;
        }
    }
    setPos(x(),y()-4);
    if(pos().y()+pixmap().height()<0){
        scene()->removeItem(this);
        delete this;
    }
}

void EnemyBullet::moveDown()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i =0;i<colliding_items.size();i++){
        if(typeid(*(colliding_items[i]))==typeid(Player)){
            scene()-> removeItem(this);
            delete this;
            game->health->decrease();


            return;
        }
        if(enemyType == 0 && (typeid(*(colliding_items[i]))==typeid(Wall) || typeid(*(colliding_items[i]))==typeid(BedrockWall))){

            scene()-> removeItem(this);
            delete this;
            return;
        }
        if(enemyType == 1 && typeid(*(colliding_items[i]))==typeid(BedrockWall)){

            scene()-> removeItem(this);
            delete this;
            return;
        }
        if(typeid(*(colliding_items[i]))==typeid(Door)){

            scene()-> removeItem(this);
            delete this;
            return;
        }
    }
    setPos(x(),y()+4);
    if(pos().y()+pixmap().height()<0){
        scene()->removeItem(this);
        delete this;
    }
}

void EnemyBullet::moveRight()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i =0;i<colliding_items.size();i++){
        if(typeid(*(colliding_items[i]))==typeid(Player)){
            scene()-> removeItem(this);
            delete this;
            game->health->decrease();


            return;
        }
        if(enemyType == 0 && (typeid(*(colliding_items[i]))==typeid(Wall) || typeid(*(colliding_items[i]))==typeid(BedrockWall))){

            scene()-> removeItem(this);
            delete this;
            return;
        }
        if(enemyType == 1 && typeid(*(colliding_items[i]))==typeid(BedrockWall)){

            scene()-> removeItem(this);
            delete this;
            return;
        }
        if(typeid(*(colliding_items[i]))==typeid(Door)){

            scene()-> removeItem(this);
            delete this;
            return;
        }
    }
    setPos(x()+4,y());
    if(pos().y()+pixmap().height()<0){
        scene()->removeItem(this);
        delete this;
    }
}

void EnemyBullet::moveLeft()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i =0;i<colliding_items.size();i++){
        if(typeid(*(colliding_items[i]))==typeid(Player)){
            scene()-> removeItem(this);
            delete this;
            game->health->decrease();


            return;
        }
        if(enemyType == 0 && (typeid(*(colliding_items[i]))==typeid(Wall) || typeid(*(colliding_items[i]))==typeid(BedrockWall))){

            scene()-> removeItem(this);
            delete this;
            return;
        }
        if(enemyType == 1 && typeid(*(colliding_items[i]))==typeid(BedrockWall)){

            scene()-> removeItem(this);
            delete this;
            return;
        }
        if(typeid(*(colliding_items[i]))==typeid(Door)){

            scene()-> removeItem(this);
            delete this;
            return;
        }
    }
    setPos(x()-4,y());
    if(pos().y()+pixmap().height()<0){
        scene()->removeItem(this);
        delete this;
    }
}
