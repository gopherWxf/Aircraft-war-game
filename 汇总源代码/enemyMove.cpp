#include"enemyMove.h"
void enemyMove()
{
	if (!Timer(30, 2)) {//timer2给敌机移动用，间隔0.03秒移动一次
		return;
	}
	Enemy* p1 = my_enemy->enemy_next;//指针指向敌机链表第一个结点
	while (p1 != NULL) {//如果没有遍历完
		p1->enemy_pos.y += 2;//修改对应的坐标
		p1 = p1->enemy_next;//指针指向下一个结点
	}
}