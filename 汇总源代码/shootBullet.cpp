#include"shootbullet.h"
void shootbullet()
{
	if ((GetAsyncKeyState(VK_SPACE))   && Timer( 200,  1) ) //�ո�������ӵ�
	{ 
		Point new_bull;
		new_bull.x = my_plane->myplane_pos.x + img_myPlane->getwidth() / 2-15;
		new_bull.y = my_plane->myplane_pos.y-10;
		insertBullet(my_bull, new_bull);
	}
}