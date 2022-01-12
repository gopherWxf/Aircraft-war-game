#include"enemyBorderCheck.h"
void enemyBorderCheck()
{
	Enemy* p1 = my_enemy->enemy_next;//指针指向第一个结点
	Enemy* p2 = nullptr;
	Enemy* p3 = my_enemy;//指针指向敌机链表头
	while (p1 != NULL) {
		if (p1->enemy_pos.y > 864)//如果坐标超过窗口大小
		{	
			if (p1->enemy_pos.tpye == 0) {//如果是小敌机
				my_plane->myplane_pos.hp -= 5;//扣玩家血量5hp
			}
			else {//如果是大敌机
				my_plane->myplane_pos.hp -= 10;//扣玩家血量10hp
			}
			p2 = p1->enemy_next;
			free(p1);
			p1 = p2;
			p3->enemy_next = p1;//把飞出边界的结点释放掉，再让前后连起来
		}
		else {
			p3 = p1;
			p1 = p1->enemy_next;//指向下一个结点
		}
	}
}