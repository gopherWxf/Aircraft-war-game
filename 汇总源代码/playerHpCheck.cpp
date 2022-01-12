#include"playerHpCheck.h"
int  playerHpCheck() {
	if (my_plane->myplane_pos.hp <= 0) {
		//销毁子弹
		Bullet* nextBull = my_bull;
		Bullet* nowBull = my_bull->bullet_next;
		while (nowBull != NULL) {
			nextBull = nowBull->bullet_next;
			free(nowBull);
			nowBull = nextBull;
		}
		my_bull->bullet_next = NULL;
		//销毁敌机
		Enemy* nextEnemy = my_enemy;
		Enemy* nowEnemy = my_enemy->enemy_next;
		while (nowEnemy != NULL) {
			nextEnemy = nowEnemy->enemy_next;
			free(nowEnemy);
			nowEnemy = nextEnemy;
		}
		my_enemy->enemy_next = NULL;
		//销毁飞机
		my_plane= initMyplane();
		//消息框
		if (MessageBox(GetHWnd(), "您已阵亡，是否继续游戏", "提示", MB_YESNO) == IDYES) {
			return 1;
		}
		else {
			return 2;
		}
	}
	return 3;
}
