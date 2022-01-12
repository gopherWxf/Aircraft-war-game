#pragma once
#include <graphics.h>
#include<conio.h>
/*putimage时候第三个参数根据IMAGE数组下表为0用NOTSRCERASE
putimage时候第三个参数根据IMAGE数组下表为1用SRCINVERT*/

//从文件中获取图像,传给指定的IMAGE对象
 void loadImage();