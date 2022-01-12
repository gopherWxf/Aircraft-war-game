#include"playerCrashCheck.h"
void playerCrashCheck() {
	Enemy* liveEnemy = my_enemy->enemy_next;
	int x = my_plane->myplane_pos.x + 67;
	int y = my_plane->myplane_pos.y;
	while (liveEnemy != nullptr) {
		if (liveEnemy->enemy_pos.tpye == 0) {
			if (x >= liveEnemy->enemy_pos.x && x <= liveEnemy->enemy_pos.x+ img_myEnemy[0][0].getwidth()
				&& y >= liveEnemy->enemy_pos.y && y <= liveEnemy->enemy_pos.y + img_myEnemy[0][0].getheight() ) {
				my_plane->myplane_pos.hp = 0;
				break;
			}
		}
		else {
			if (x >= liveEnemy->enemy_pos.x && x <= liveEnemy->enemy_pos.x + img_myEnemy[1][0].getwidth()
				&& y >= liveEnemy->enemy_pos.y && y <= liveEnemy->enemy_pos.y + img_myEnemy[1][0].getheight()) {
				my_plane->myplane_pos.hp = 0;
				break;
			}
		}
		liveEnemy = liveEnemy->enemy_next;
	}
}