//#define _CRT_SECURE_NO_WARNINGS
//#include<conio.h>
//// Ϊ��ʹ��_getch()��������ȡ������Ϣ
//#include<stdio.h>
////����ͼ�ο�
//#include<graphics.h>
////%+11.2--��һ��11����������С�����Զ���������
////1.easyxͼ�ο�ֻ������c++����������c
//int main()
//{
//	//��������---һ����640��480��,SHOWCONSOLE==�ڿ���̨���
//	initgraph(640, 480, SHOWCONSOLE);
//	//���ñ�����ɫ
//	//����������
//	setbkcolor(WHITE);
//	cleardevice();//����
//	//����������ʽ  ʵ�� ��ƿ��
//	setlinestyle(PS_SOLID, 5);
//	//���������ɫ 
//	setfillcolor(YELLOW);
//	//����������ɫ
//	setlinecolor(BLUE);
//	//�����
//	circle(50, 50, 50);
//	//������б߿�
//	fillcircle(50, 150, 50);
//	//������ޱ߿�
//	solidcircle(50, 250, 50);
//	//������ͼ�񻯴�����������룬ֻ���ڿ���̨�������
//	//printf("���룺");
//	//scanf("");
//
//	//�����ַ���ɫ
//	//rgb������QQ��ͼ��c������ɫ��ճ�������棬Ҳ�����û�ͼ��
//	//��Ҫ����255
//	settextcolor(RGB(30, 30, 30));
//	//����������ʽ 
//	settextstyle(30, 0, "����");
//	//���ñ���ģʽ---transparent͸����
//	//#define TRANSPARENT   ͸��     1
//	//#define OPAQUE		��͸��   2
//	//#define BKMODE_LAST   ��͸��   2
//
//	setbkmode(TRANSPARENT);
//
//	// ���غ��� "outtextxy" ʵ��
//	// �ַ������µ�
//	// 1�����ַ���˫����ǰ��� L
//	// outtextxy(50, 50, L"haha");
//	// 
//	// 2.���ַ�����TEXT()������
//	// outtextxy(50, 50, TEXT("haha"));
//	// #define __T(x)      L ## x
//	// 
//	// 3.��Ŀ->����->�߼�->�ַ���->���ֽ��ַ���
//	outtextxy(50, 50, "haha");
//
//	fillrectangle(200, 50, 500, 100);
//
//	settextcolor(RGB(0, 0, 10));
//	char arr[] = "���Ǻ���";
//	//�����ؿ�---��������
//	int width = textwidth(arr);
//	//�����ظ�---��������
//	int height = textheight(arr);
//	//��������200����������500���Ҽ�����ǻ��Ŀ�Ŀ�	ȡһ��
//	//�ַ���ȵ�һ��
//	//������������ַ�����ľ���
//	width = 300 / 2 - width / 2;
//	//��Ŀ�߶��ǵ�bottom��100��-ͷtop��50��=50��ȡһ��
//	//�ַ��ĸ߶�ȡһ��
//	//������������ַ�����ߵľ���
//	height = 50 / 2 - height / 2;
//	outtextxy(200 + width, 50 + height, arr);
//
//
//	//���ͼƬ
//	IMAGE img;
//	//���·����./+ͼƬ�� ../����һ��
//	//����·����D:\code\Cplusplus\EasyXͼ�ο�\EasyXͼ�ο�\����.jpg
//	//loadimage==����ֵ����ͼƬ��img--��scanf
//	//������С��loadimage
//	loadimage(&img, "D:\\code\\Cplusplus\\EasyXͼ�ο�\\EasyXͼ�ο�\\����.jpg", 250, 200);
//	//���ͼƬ--��printf
//	//putimage ��������ñ���
//	//ͼƬ����������Ͻǣ����Ǹ������꣩
//	putimage(0, 0, &img);
//
//	//�����Ϣ
//	//ѭ���ó���Ϣ
//	int x = 0, y = 0;
//
//	while (1)
//	{
//		//����-����ƶ��켣
//		cleardevice();
//		//����Բ�ƶ�
//		setfillcolor(BROWN);
//		fillcircle(x, y, 50);
//
//
//		//���̲���
//		char key = _getch();
//		//printf("%d,%c\n", key, key);
//		//�ϼ�72 �¼�80 ���75 �Ҽ�77
//		switch (key)
//		{
//		case 72:
//		case 'W':
//		case 'w':
//			y -= 5;
//			printf("�ϼ�\n");
//			break;
//		case 80:
//		case 'S':
//		case 's':
//			y += 5;
//			printf("�¼�\n");
//			break;
//		case 75:
//		case 'a':
//		case 'A':
//			x -= 5;
//			printf("���\n");
//			break;
//		case 77:
//		case 'D':
//		case 'd':
//			x += 5;
//			printf("�Ҽ�\n");
//			break;
//
//
//		}
//
//		//�ж������Ϣ�Ƿ����
//		if (MouseHit())
//		{
//			//����һ����������
//			//GetMouseMsg()��ȡ�����Ϣ
//
//			MOUSEMSG msg = GetMouseMsg();
//			//����д�õ���������ƶ��������
//			//printf("�����ǣ�%d,%d��\n", msg.x, msg.y);
//			//��Switch�����д�õ����������������
//
//			//	fillrectangle(200, 50, 500, 100);
//
//			//����ڿ�ķ�Χ�ھʹ�ӡhaha
//			/*if (msg.x > 200 && msg.x < 500 && msg.y>50 && msg.y < 100)
//			{
//				printf("haha\n");
//			}*/
//
//			// 
//			//�ж���ʲô��Ϣ
//			switch (msg.uMsg)
//			{
//			case WM_LBUTTONDOWN:
//				//����ڿ��������ӡhaha������
//				if (msg.x > 200 && msg.x < 500 && msg.y>50 && msg.y < 100)
//				{
//					printf("haha\n");
//				}
//				printf("��������ǣ�%d,%d��\n", msg.x, msg.y);
//				outtextxy(200, 200, "����������");
//				break;
//			case WM_RBUTTONDOWN:
//				//����ڿ����Ҽ���ӡhaha������
//				if (msg.x > 200 && msg.x < 500 && msg.y>50 && msg.y < 100)
//				{
//					printf("haha\n");
//				}
//				printf("�Ҽ������ǣ�%d,%d��\n", msg.x, msg.y);
//				outtextxy(200, 200, "����Ҽ�����");
//				break;
//			}
//
//		}
//	}
//
//
//
//
//	getchar();
//	//�رմ���--�޲���
//	closegraph();
//
//	return 0;
//}
