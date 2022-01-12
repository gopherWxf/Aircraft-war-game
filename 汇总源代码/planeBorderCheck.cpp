#include"planeBorderCheck.h"
//飞机如果超出边界修改为挨着边界
void planeBorderCheck()
{
	//飞机超出左边界
	if (my_plane->myplane_pos.x+4<-50)
		my_plane->myplane_pos.x = -4-50;
	if (my_plane->myplane_pos.y < 0)
		my_plane->myplane_pos.y = 0;
	if (my_plane->myplane_pos.x + img_myPlane[0].getwidth() -62 > 591)
		my_plane->myplane_pos.x = 591 - img_myPlane[0].getwidth()+62;
	if (my_plane->myplane_pos.y + img_myPlane[0].getheight() > 864)
		my_plane->myplane_pos.y = 864 - img_myPlane[0].getheight();
}