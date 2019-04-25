#include<windows.h>
#include<graphics.h>
#include<MMSystem.h>							//播放音乐头文件
#pragma comment(lib,"winmm.lib")	     //告诉编译器,加载winmm.lib库文件

int  main (void) {
	
	initgraph(600,340);		//界面初始化
	
	loadimage(0,_T("bg.jpg") );		//加载图片
	
	mciSendString(_T("play  极乐净土.mp3  repeat"),  0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}