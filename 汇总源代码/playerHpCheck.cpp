#include"playerHpCheck.h"
int  playerHpCheck() {
	if (my_plane->myplane_pos.hp <= 0) {
		//�����ӵ�
		Bullet* nextBull = my_bull;
		Bullet* nowBull = my_bull->bullet_next;
		while (nowBull != NULL) {
			nextBull = nowBull->bullet_next;
			free(nowBull);
			nowBull = nextBull;
		}
		my_bull->bullet_next = NULL;
		//���ٵл�
		Enemy* nextEnemy = my_enemy;
		Enemy* nowEnemy = my_enemy->enemy_next;
		while (nowEnemy != NULL) {
			nextEnemy = nowEnemy->enemy_next;
			free(nowEnemy);
			nowEnemy = nextEnemy;
		}
		my_enemy->enemy_next = NULL;
		//���ٷɻ�
		my_plane= initMyplane();
		//��Ϣ��
		if (MessageBox(GetHWnd(), "�����������Ƿ������Ϸ", "��ʾ", MB_YESNO) == IDYES) {
			return 1;
		}
		else {
			return 2;
		}
	}
	return 3;
}
