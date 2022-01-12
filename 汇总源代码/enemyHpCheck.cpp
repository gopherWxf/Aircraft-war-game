#include"enemyHpCheck.h"
void enemyHpCheck() {
	Enemy* front = my_enemy;
	Enemy* now = my_enemy->enemy_next;
	Enemy* next = NULL;
	while (now != NULL) {
		if (now->enemy_pos.hp < 0) { //如果当前遍历到的结点的血量小于0
			bgmDie();//播放死亡的BGM
			if (now->enemy_pos.tpye == 0) {//如果类型是小敌机
				my_plane->myplane_pos.score += 10;//玩家分数加10
			}
			else {
				my_plane->myplane_pos.score += 20;//玩家分数加20
			}
			next = now->enemy_next;
			free(now);
			now = next;
			front->enemy_next = now;//释放到血量<0的结点，再使前后连接起来
		}
		else {
			front = now;
			now = now->enemy_next;//指向下一个结点
		}
	}
}
