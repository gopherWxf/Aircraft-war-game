#include"imageLoad.h"
//ͼ��� IMAGE ����
//����
IMAGE img_background;
//�ӵ�
IMAGE img_myBull[2];
//С�л���00��01��&�ел���10��11��
IMAGE img_myEnemy[2][2];
//�ҷ��ɻ�
IMAGE img_myPlane[2];
//�ҷ��ɻ���ը
IMAGE img_myPlaneBreak[2];
void loadImage() {
	//����
	loadimage(&img_background, "./images/background.jpg");
	//�ҷ��ɻ�
	loadimage(&img_myPlane[0], "./images/planeNormal_1.jpg");
	loadimage(&img_myPlane[1], "./images/planeNormal_2.jpg");
	//�ӵ�
	loadimage(&img_myBull[0], "./images/bullet1.jpg");
	loadimage(&img_myBull[1], "./images/bullet2.jpg");
	//С�л�
	loadimage(&img_myEnemy[0][0], "./images/enemy_1.jpg");
	loadimage(&img_myEnemy[0][1], "./images/enemy_2.jpg");
	//�ел�
	loadimage(&img_myEnemy[1][0], "./images/enemyPlane1.jpg");
	loadimage(&img_myEnemy[1][1], "./images/enemyPlane2.jpg");
	//�ɻ���ը
	loadimage(&img_myPlaneBreak[0], "./images/planeBoom_1.jpg");
	loadimage(&img_myPlaneBreak[1], "./images/planeBoom_2.jpg");
}


