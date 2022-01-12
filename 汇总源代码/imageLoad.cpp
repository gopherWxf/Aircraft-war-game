#include"imageLoad.h"
//图像的 IMAGE 对象
//背景
IMAGE img_background;
//子弹
IMAGE img_myBull[2];
//小敌机（00，01）&中敌机（10，11）
IMAGE img_myEnemy[2][2];
//我方飞机
IMAGE img_myPlane[2];
//我方飞机爆炸
IMAGE img_myPlaneBreak[2];
void loadImage() {
	//背景
	loadimage(&img_background, "./images/background.jpg");
	//我方飞机
	loadimage(&img_myPlane[0], "./images/planeNormal_1.jpg");
	loadimage(&img_myPlane[1], "./images/planeNormal_2.jpg");
	//子弹
	loadimage(&img_myBull[0], "./images/bullet1.jpg");
	loadimage(&img_myBull[1], "./images/bullet2.jpg");
	//小敌机
	loadimage(&img_myEnemy[0][0], "./images/enemy_1.jpg");
	loadimage(&img_myEnemy[0][1], "./images/enemy_2.jpg");
	//中敌机
	loadimage(&img_myEnemy[1][0], "./images/enemyPlane1.jpg");
	loadimage(&img_myEnemy[1][1], "./images/enemyPlane2.jpg");
	//飞机爆炸
	loadimage(&img_myPlaneBreak[0], "./images/planeBoom_1.jpg");
	loadimage(&img_myPlaneBreak[1], "./images/planeBoom_2.jpg");
}


