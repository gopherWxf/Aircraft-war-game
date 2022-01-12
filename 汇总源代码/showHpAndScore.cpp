#include"showHpAndScore.h"
void showHpAndScore() {
	settextcolor(RED);
	setbkmode(TRANSPARENT);
	char hp[50];
	sprintf_s(hp, "HP:%d", my_plane->myplane_pos.hp);
	settextstyle(30, 30, "ΊΪΜε");
	outtextxy(20, 20, hp);
	/***************************************/
	settextcolor(RED);
	setbkmode(TRANSPARENT);
	char score[50];
	sprintf_s(score, "SRORE:%d", my_plane->myplane_pos.score);
	settextstyle(30, 30, "ΊΪΜε");
	outtextxy(20, 60, score);
}