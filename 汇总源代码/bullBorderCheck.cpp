#include"bullBorderCheck.h"
void bullBorder()
{
	Bullet* p1 = my_bull->bullet_next; 
	Bullet* p2=nullptr;
	Bullet* p3 = my_bull;
	while (p1 != NULL) {
		if (p1->bullet_pos.y < -20)
		{
			p2 = p1->bullet_next;
			free(p1);
			p1 = p2;
			p3->bullet_next = p1;
		}
		else {
			p3 = p1;
			p1 = p1->bullet_next;
		}
	}
}