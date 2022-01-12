#include"bullCrashCheck.h"
void bullCrashCheck() {
	Bullet* nowBull = my_bull->bullet_next;
	while (nowBull != nullptr) {
		Enemy* nowEnemy = my_enemy->enemy_next;
		while (nowEnemy != nullptr) {
			if (nowEnemy->enemy_pos.tpye == 0) {
				if (nowBull->bullet_pos.x >= nowEnemy->enemy_pos.x &&
					nowBull->bullet_pos.x <= nowEnemy->enemy_pos.x + img_myEnemy[0][0].getwidth() &&
					nowBull->bullet_pos.y >= nowEnemy->enemy_pos.y &&
					nowBull->bullet_pos.y <= nowEnemy->enemy_pos.y + img_myEnemy[0][0].getheight()) {
					bgmHit();
					nowEnemy->enemy_pos.hp -= 5;
					nowBull->bullet_pos.x = -25;
					nowBull->bullet_pos.y = -25;

				}
			}
			else {
				if (nowBull->bullet_pos.x >= nowEnemy->enemy_pos.x &&
					nowBull->bullet_pos.x <= nowEnemy->enemy_pos.x + img_myEnemy[1][0].getwidth() &&
					nowBull->bullet_pos.y >= nowEnemy->enemy_pos.y &&
					nowBull->bullet_pos.y <= nowEnemy->enemy_pos.y + img_myEnemy[1][0].getheight()) {
					bgmHit();
					nowEnemy->enemy_pos.hp -= 5;
					nowBull->bullet_pos.x = -25;
					nowBull->bullet_pos.y = -25;
				}
			}
			nowEnemy = nowEnemy->enemy_next;
		}
		nowBull = nowBull->bullet_next;
	}
}