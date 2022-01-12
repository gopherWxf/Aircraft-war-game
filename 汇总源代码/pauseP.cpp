#include"pauseP.h"
void getKeyPause()
{
	if (GetAsyncKeyState('P'))
	{
		mciSendString("stop music/BGM1.mp3", 0, 0, 0);
		char c;
		while (c = getchar())
		{
			if (c == 'p' || c == 'P') {
				mciSendString("play music/BGM1.mp3 repeat", 0, 0, 0);
				break;
			}
		}
	}
}