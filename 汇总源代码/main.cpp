#include"main.h"
int main() {
	srand(time(NULL));//���������
FLAG:
	void init();
	initgraph(591, 864);
	loadImage();
	bgmBegin();//����BGM
	BeginBatchDraw();//˫���忪ʼ
	while (1) {
		gameDraw();//���ƻ���
		FlushBatchDraw();//˫������ʾ
		getKeyPause();//��ͣ���
		/***************************************************/
		playerMove();//����ƶ� Timer5
		planeBorderCheck();//��ұ߽���
		playerCrashCheck();//�����ײ���
		int cs=playerHpCheck();//���Ѫ���ж�
		if (cs==1) {
			closegraph();
			goto FLAG;
		}
		else if(cs==2) {
			break;
		}
		/***************************************************/
		shootbullet();//�����ӵ� Timer1
		bullMove();//�ӵ��ƶ� Timer4
		bullCrashCheck();//�ӵ���ײ���
		bullBorder();//�ӵ��߽���
		/***************************************************/
		createEnemy();//�����л� Timer3
		enemyMove();//�л��ƶ� Timer2
		enemyBorderCheck();//�߽���
		enemyHpCheck();//�л�Ѫ�����
		/***************************************************/
	}
	EndBatchDraw();//˫�������
	_getch();
	closegraph();
}