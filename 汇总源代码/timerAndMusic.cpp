#include"timerAndMusic.h"
//��ʱ�����������Ͷ�Ӧid��һ��idֻ�ܸ�һ������ʹ��
bool Timer(int ms, int id) {
	static int t[20];
	if (clock() - t[id] > ms) {
		t[id] = clock();
		return 1;
	}
	return 0;
}
//��Ϸ��ʼBGM����
void bgmBegin()
{
	mciSendString("play music/BGM1.mp3 repeat", 0, 0, 0);
}
//�ӵ����зɻ�
void bgmHit()
{
	mciSendString("play music/biu.mp3", 0, 0, 0);
}
//�ҷ��ɻ�����
void bgmDie()
{
	mciSendString("play music/giao.mp3", 0, 0, 0);
}
