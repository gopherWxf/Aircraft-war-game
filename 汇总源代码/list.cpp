#include"list.h"
Bullet* initBullet()
{
	Bullet* p = (Bullet*)malloc(sizeof(Bullet));
	p->bullet_next = nullptr;
	return p;
}
Myplane* initMyplane()
{
	Myplane* p = (Myplane*)malloc(sizeof(Myplane));
	p->myplane_pos.x = 237;
	p->myplane_pos.y = 744;
	p->myplane_pos.hp = 100;
	p->myplane_pos.score = 0;
	p->Myplane_next = nullptr;
	return p;
}
Enemy* initEnemy()
{
	Enemy* p = (Enemy*)malloc(sizeof(Enemy));
	p->enemy_next = nullptr;
	return p;
}
void insertBullet(Bullet* head, Point new_bullet)
{
	Bullet* p = (Bullet*)malloc(sizeof(Bullet));
	p->bullet_pos = new_bullet;
	p->bullet_next = head->bullet_next;
	head->bullet_next = p;
}
void insertEnemy(Enemy* head, Point new_enemy)
{
	Enemy* p = (Enemy*)malloc(sizeof(Enemy));
	p->enemy_pos = new_enemy;
	p->enemy_next = head->enemy_next;
	head->enemy_next = p;
}