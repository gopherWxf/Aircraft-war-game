#include"planeBorderCheck.h"
//�ɻ���������߽��޸�Ϊ���ű߽�
void planeBorderCheck()
{
	//�ɻ�������߽�
	if (my_plane->myplane_pos.x+4<-50)
		my_plane->myplane_pos.x = -4-50;
	if (my_plane->myplane_pos.y < 0)
		my_plane->myplane_pos.y = 0;
	if (my_plane->myplane_pos.x + img_myPlane[0].getwidth() -62 > 591)
		my_plane->myplane_pos.x = 591 - img_myPlane[0].getwidth()+62;
	if (my_plane->myplane_pos.y + img_myPlane[0].getheight() > 864)
		my_plane->myplane_pos.y = 864 - img_myPlane[0].getheight();
}