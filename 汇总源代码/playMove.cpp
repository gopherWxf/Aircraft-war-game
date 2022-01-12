#include"playMove.h"
void playerMove()
{
	if (!Timer(10, 5))
		return;
	if (GetAsyncKeyState('W') || GetAsyncKeyState(VK_UP)  )//飞机向上移动
		my_plane->myplane_pos.y -= 5;
	else if (GetAsyncKeyState('S') || GetAsyncKeyState(VK_DOWN) )//飞机向下移动
		my_plane->myplane_pos.y +=5;
	else if (GetAsyncKeyState('A') || GetAsyncKeyState(VK_LEFT) )//飞机向左移动
		my_plane->myplane_pos.x -= 5;
	else if (GetAsyncKeyState('D') || GetAsyncKeyState(VK_RIGHT) )//飞机向右移动
		my_plane->myplane_pos.x += 5;
}