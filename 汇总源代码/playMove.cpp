#include"playMove.h"
void playerMove()
{
	if (!Timer(10, 5))
		return;
	if (GetAsyncKeyState('W') || GetAsyncKeyState(VK_UP)  )//�ɻ������ƶ�
		my_plane->myplane_pos.y -= 5;
	else if (GetAsyncKeyState('S') || GetAsyncKeyState(VK_DOWN) )//�ɻ������ƶ�
		my_plane->myplane_pos.y +=5;
	else if (GetAsyncKeyState('A') || GetAsyncKeyState(VK_LEFT) )//�ɻ������ƶ�
		my_plane->myplane_pos.x -= 5;
	else if (GetAsyncKeyState('D') || GetAsyncKeyState(VK_RIGHT) )//�ɻ������ƶ�
		my_plane->myplane_pos.x += 5;
}