#include"createEnemy.h"
void createEnemy() {
	if (!Timer(1000, 6)) {//timer6�������л��ã�ÿ��һ�봴��һ��
		return;
	}
	Point new_enemy;//����һ����Ӧ�Ľṹ��
	if (rand() % 10 >2) {//���������������С�л��ĸ��ʣ�80%С�л�
		new_enemy.tpye = 0;//����
		new_enemy.y = -50;//��ʼy���꣬ʹ��������ʾ����
		new_enemy.x = rand() % 550;//��ʼx����
		new_enemy.hp = 15;//��ʼ��Ѫ��
	}
	else {
		new_enemy.tpye = 1;//����
		new_enemy.y =-50;//��ʼy���꣬ʹ��������ʾ����
		new_enemy.x = rand() % 550;//��ʼx����
		new_enemy.hp = 30;//��ʼ��Ѫ��
	}
	insertEnemy(my_enemy, new_enemy);//��������
}