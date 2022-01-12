#include"createEnemy.h"
void createEnemy() {
	if (!Timer(1000, 6)) {//timer6给创建敌机用，每隔一秒创建一次
		return;
	}
	Point new_enemy;//创建一个对应的结构体
	if (rand() % 10 >2) {//利用随机数调整大小敌机的概率，80%小敌机
		new_enemy.tpye = 0;//类型
		new_enemy.y = -50;//初始y坐标，使得它不显示出来
		new_enemy.x = rand() % 550;//初始x坐标
		new_enemy.hp = 15;//初始化血量
	}
	else {
		new_enemy.tpye = 1;//类型
		new_enemy.y =-50;//初始y坐标，使得它不显示出来
		new_enemy.x = rand() % 550;//初始x坐标
		new_enemy.hp = 30;//初始化血量
	}
	insertEnemy(my_enemy, new_enemy);//插入链表
}