#include"enemyMove.h"
void enemyMove()
{
	if (!Timer(30, 2)) {//timer2���л��ƶ��ã����0.03���ƶ�һ��
		return;
	}
	Enemy* p1 = my_enemy->enemy_next;//ָ��ָ��л������һ�����
	while (p1 != NULL) {//���û�б�����
		p1->enemy_pos.y += 2;//�޸Ķ�Ӧ������
		p1 = p1->enemy_next;//ָ��ָ����һ�����
	}
}