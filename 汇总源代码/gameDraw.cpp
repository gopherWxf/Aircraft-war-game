#include"gameDraw.h"
void gameDraw() {
	//绘制背景
	putimage(0, 0, &img_background);
	//绘制我方飞机
	if (my_plane->myplane_pos.hp > 0) {
		putimage(my_plane->myplane_pos.x, my_plane->myplane_pos.y, &img_myPlane[0], NOTSRCERASE);//加载玩家背景图
		putimage(my_plane->myplane_pos.x, my_plane->myplane_pos.y, &img_myPlane[1], SRCINVERT);//加载玩家背景图
	}
	else {
		putimage(my_plane->myplane_pos.x, my_plane->myplane_pos.y, &img_myPlaneBreak[0], NOTSRCERASE);//加载玩家背景图
		putimage(my_plane->myplane_pos.x, my_plane->myplane_pos.y, &img_myPlaneBreak[1], SRCINVERT);//加载玩家背景图
	}
	//绘制子弹
	Bullet* liveBull = my_bull->bullet_next;
	while (liveBull!=nullptr) {
		putimage(liveBull->bullet_pos.x, liveBull->bullet_pos.y,&img_myBull[0], NOTSRCERASE);
		putimage(liveBull->bullet_pos.x, liveBull->bullet_pos.y, &img_myBull[1], SRCINVERT);
		liveBull = liveBull->bullet_next;
	}
	//绘制敌机
	Enemy* liveEnemy=my_enemy->enemy_next;
	while (liveEnemy != nullptr) {
		if (liveEnemy->enemy_pos.tpye == 0) {
			putimage(liveEnemy->enemy_pos.x, liveEnemy->enemy_pos.y, &img_myEnemy[0][0], NOTSRCERASE);
			putimage(liveEnemy->enemy_pos.x, liveEnemy->enemy_pos.y, &img_myEnemy[0][1], SRCINVERT);
		}
		else {
			putimage(liveEnemy->enemy_pos.x, liveEnemy->enemy_pos.y, &img_myEnemy[1][0], NOTSRCERASE);
			putimage(liveEnemy->enemy_pos.x, liveEnemy->enemy_pos.y, &img_myEnemy[1][1], SRCINVERT);
		}
		liveEnemy = liveEnemy->enemy_next;
	}
	//绘制血量和分数
	showHpAndScore();
}