#include<windows.h>
#include<graphics.h>
#include<MMSystem.h>							//��������ͷ�ļ�
#pragma comment(lib,"winmm.lib")	     //���߱�����,����winmm.lib���ļ�

int  main (void) {
	
	initgraph(600,340);		//�����ʼ��
	
	loadimage(0,_T("bg.jpg") );		//����ͼƬ
	
	mciSendString(_T("play  ���־���.mp3  repeat"),  0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}