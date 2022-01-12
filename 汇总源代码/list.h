#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef struct //点结构体，用来表示坐标
{
	int x, y;//x坐标和y坐标
	int tpye;
	int hp;
	int score;
}Point;
 struct Bullet //子弹链表结构体
{
	Point bullet_pos;//子弹的位置
	Bullet* bullet_next;//子弹的指针，用来指向下一个子弹
};
 struct Myplane //玩家飞机链表结构体
{
	Point myplane_pos;//玩家飞机的位置
	Myplane* Myplane_next;//因为只有一个玩家飞机
};
 struct  Enemy//敌机链表结构体
{
	Point enemy_pos;//敌机的位置
	Enemy* enemy_next;//敌机的指针，用来指向下一个敌机
};
 Bullet* initBullet();//子弹链表初始化(创建)头节点的声明
 Myplane* initMyplane();//玩家飞机链表初始化(创建)声明
 Enemy* initEnemy();//敌机链表初始化(创建)头节点的声明
 void insertBullet(Bullet* head, Point new_bullet);//生成子弹函数声明
 void insertEnemy(Enemy* head, Point new_enemy);//生成敌机函数声明