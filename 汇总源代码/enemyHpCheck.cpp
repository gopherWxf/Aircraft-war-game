#include"enemyHpCheck.h"
void enemyHpCheck() {
	Enemy* front = my_enemy;
	Enemy* now = my_enemy->enemy_next;
	Enemy* next = NULL;
	while (now != NULL) {
		if (now->enemy_pos.hp < 0) { //�����ǰ�������Ľ���Ѫ��С��0
			bgmDie();//����������BGM
			if (now->enemy_pos.tpye == 0) {//���������С�л�
				my_plane->myplane_pos.score += 10;//��ҷ�����10
			}
			else {
				my_plane->myplane_pos.score += 20;//��ҷ�����20
			}
			next = now->enemy_next;
			free(now);
			now = next;
			front->enemy_next = now;//�ͷŵ�Ѫ��<0�Ľ�㣬��ʹǰ����������
		}
		else {
			front = now;
			now = now->enemy_next;//ָ����һ�����
		}
	}
}
