#include"enemyBorderCheck.h"
void enemyBorderCheck()
{
	Enemy* p1 = my_enemy->enemy_next;//ָ��ָ���һ�����
	Enemy* p2 = nullptr;
	Enemy* p3 = my_enemy;//ָ��ָ��л�����ͷ
	while (p1 != NULL) {
		if (p1->enemy_pos.y > 864)//������곬�����ڴ�С
		{	
			if (p1->enemy_pos.tpye == 0) {//�����С�л�
				my_plane->myplane_pos.hp -= 5;//�����Ѫ��5hp
			}
			else {//����Ǵ�л�
				my_plane->myplane_pos.hp -= 10;//�����Ѫ��10hp
			}
			p2 = p1->enemy_next;
			free(p1);
			p1 = p2;
			p3->enemy_next = p1;//�ѷɳ��߽�Ľ���ͷŵ�������ǰ��������
		}
		else {
			p3 = p1;
			p1 = p1->enemy_next;//ָ����һ�����
		}
	}
}