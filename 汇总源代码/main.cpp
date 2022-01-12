#include"main.h"
int main() {
	srand(time(NULL));//随机数种子
FLAG:
	void init();
	initgraph(591, 864);
	loadImage();
	bgmBegin();//播放BGM
	BeginBatchDraw();//双缓冲开始
	while (1) {
		gameDraw();//绘制画面
		FlushBatchDraw();//双缓冲显示
		getKeyPause();//暂停检测
		/***************************************************/
		playerMove();//玩家移动 Timer5
		planeBorderCheck();//玩家边界检测
		playerCrashCheck();//玩家碰撞检测
		int cs=playerHpCheck();//玩家血量判断
		if (cs==1) {
			closegraph();
			goto FLAG;
		}
		else if(cs==2) {
			break;
		}
		/***************************************************/
		shootbullet();//发射子弹 Timer1
		bullMove();//子弹移动 Timer4
		bullCrashCheck();//子弹碰撞检测
		bullBorder();//子弹边界检测
		/***************************************************/
		createEnemy();//创建敌机 Timer3
		enemyMove();//敌机移动 Timer2
		enemyBorderCheck();//边界检测
		enemyHpCheck();//敌机血量检测
		/***************************************************/
	}
	EndBatchDraw();//双缓冲结束
	_getch();
	closegraph();
}