#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef struct //��ṹ�壬������ʾ����
{
	int x, y;//x�����y����
	int tpye;
	int hp;
	int score;
}Point;
 struct Bullet //�ӵ�����ṹ��
{
	Point bullet_pos;//�ӵ���λ��
	Bullet* bullet_next;//�ӵ���ָ�룬����ָ����һ���ӵ�
};
 struct Myplane //��ҷɻ�����ṹ��
{
	Point myplane_pos;//��ҷɻ���λ��
	Myplane* Myplane_next;//��Ϊֻ��һ����ҷɻ�
};
 struct  Enemy//�л�����ṹ��
{
	Point enemy_pos;//�л���λ��
	Enemy* enemy_next;//�л���ָ�룬����ָ����һ���л�
};
 Bullet* initBullet();//�ӵ������ʼ��(����)ͷ�ڵ������
 Myplane* initMyplane();//��ҷɻ������ʼ��(����)����
 Enemy* initEnemy();//�л������ʼ��(����)ͷ�ڵ������
 void insertBullet(Bullet* head, Point new_bullet);//�����ӵ���������
 void insertEnemy(Enemy* head, Point new_enemy);//���ɵл���������