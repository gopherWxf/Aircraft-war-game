#include"timerAndMusic.h"
//定时器，传入毫秒和对应id，一个id只能给一个功能使用
bool Timer(int ms, int id) {
	static int t[20];
	if (clock() - t[id] > ms) {
		t[id] = clock();
		return 1;
	}
	return 0;
}
//游戏开始BGM播放
void bgmBegin()
{
	mciSendString("play music/BGM1.mp3 repeat", 0, 0, 0);
}
//子弹击中飞机
void bgmHit()
{
	mciSendString("play music/biu.mp3", 0, 0, 0);
}
//我方飞机死亡
void bgmDie()
{
	mciSendString("play music/giao.mp3", 0, 0, 0);
}
