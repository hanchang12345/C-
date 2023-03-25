//#define _CRT_SECURE_NO_WARNINGS
//#include<conio.h>
//// 为了使用_getch()函数来获取键盘信息
//#include<stdio.h>
////包含图形库
//#include<graphics.h>
////%+11.2--》一共11个宽，有两个小数，自动四舍五入
////1.easyx图形库只适用于c++，不适用与c
//int main()
//{
//	//创建窗口---一般是640宽，480高,SHOWCONSOLE==在控制台输出
//	initgraph(640, 480, SHOWCONSOLE);
//	//设置背景颜色
//	//两部不能少
//	setbkcolor(WHITE);
//	cleardevice();//清屏
//	//设置线条样式  实线 设计宽度
//	setlinestyle(PS_SOLID, 5);
//	//设置填充颜色 
//	setfillcolor(YELLOW);
//	//设置量框颜色
//	setlinecolor(BLUE);
//	//无填充
//	circle(50, 50, 50);
//	//有填充有边框
//	fillcircle(50, 150, 50);
//	//有填充无边框
//	solidcircle(50, 250, 50);
//	//不能在图像化窗口输出，输入，只能在控制台输出输入
//	//printf("输入：");
//	//scanf("");
//
//	//设置字符颜色
//	//rgb（）用QQ截图按c复制颜色再粘贴到里面，也可以用画图板
//	//不要超过255
//	settextcolor(RGB(30, 30, 30));
//	//设置字体样式 
//	settextstyle(30, 0, "楷体");
//	//设置背景模式---transparent透明的
//	//#define TRANSPARENT   透明     1
//	//#define OPAQUE		不透明   2
//	//#define BKMODE_LAST   不透明   2
//
//	setbkmode(TRANSPARENT);
//
//	// 重载函数 "outtextxy" 实例
//	// 字符集导致的
//	// 1，在字符串双引号前面加 L
//	// outtextxy(50, 50, L"haha");
//	// 
//	// 2.把字符串用TEXT()包起来
//	// outtextxy(50, 50, TEXT("haha"));
//	// #define __T(x)      L ## x
//	// 
//	// 3.项目->属性->高级->字符集->多字节字符集
//	outtextxy(50, 50, "haha");
//
//	fillrectangle(200, 50, 500, 100);
//
//	settextcolor(RGB(0, 0, 10));
//	char arr[] = "我是韩昌";
//	//求像素宽---返回数字
//	int width = textwidth(arr);
//	//求像素高---返回数字
//	int height = textheight(arr);
//	//左坐标是200，右坐标是500，右减左就是画的框的宽	取一半
//	//字符宽度的一半
//	//两数相减就是字符到框的距离
//	width = 300 / 2 - width / 2;
//	//设的框高度是底bottom（100）-头top（50）=50，取一半
//	//字符的高度取一半
//	//两数相减就是字符到框边的距离
//	height = 50 / 2 - height / 2;
//	outtextxy(200 + width, 50 + height, arr);
//
//
//	//输出图片
//	IMAGE img;
//	//相对路径：./+图片名 ../是上一级
//	//绝对路径：D:\code\Cplusplus\EasyX图形库\EasyX图形库\动漫.jpg
//	//loadimage==》赋值，把图片给img--》scanf
//	//调整大小在loadimage
//	loadimage(&img, "D:\\code\\Cplusplus\\EasyX图形库\\EasyX图形库\\动漫.jpg", 250, 200);
//	//输出图片--》printf
//	//putimage 坐标可以用变量
//	//图片的描点在左上角（就是给的坐标）
//	putimage(0, 0, &img);
//
//	//鼠标消息
//	//循环得出信息
//	int x = 0, y = 0;
//
//	while (1)
//	{
//		//清屏-清除移动轨迹
//		cleardevice();
//		//控制圆移动
//		setfillcolor(BROWN);
//		fillcircle(x, y, 50);
//
//
//		//键盘操作
//		char key = _getch();
//		//printf("%d,%c\n", key, key);
//		//上键72 下键80 左键75 右键77
//		switch (key)
//		{
//		case 72:
//		case 'W':
//		case 'w':
//			y -= 5;
//			printf("上键\n");
//			break;
//		case 80:
//		case 'S':
//		case 's':
//			y += 5;
//			printf("下键\n");
//			break;
//		case 75:
//		case 'a':
//		case 'A':
//			x -= 5;
//			printf("左键\n");
//			break;
//		case 77:
//		case 'D':
//		case 'd':
//			x += 5;
//			printf("右键\n");
//			break;
//
//
//		}
//
//		//判断鼠标信息是否存在
//		if (MouseHit())
//		{
//			//定义一个鼠标变量，
//			//GetMouseMsg()获取鼠标信息
//
//			MOUSEMSG msg = GetMouseMsg();
//			//在这写得到的是鼠标移动的坐标点
//			//printf("坐标是（%d,%d）\n", msg.x, msg.y);
//			//在Switch语句中写得到的是鼠标点击的坐标
//
//			//	fillrectangle(200, 50, 500, 100);
//
//			//鼠标在框的范围内就打印haha
//			/*if (msg.x > 200 && msg.x < 500 && msg.y>50 && msg.y < 100)
//			{
//				printf("haha\n");
//			}*/
//
//			// 
//			//判断是什么信息
//			switch (msg.uMsg)
//			{
//			case WM_LBUTTONDOWN:
//				//鼠标在框中左键打印haha和坐标
//				if (msg.x > 200 && msg.x < 500 && msg.y>50 && msg.y < 100)
//				{
//					printf("haha\n");
//				}
//				printf("左键坐标是（%d,%d）\n", msg.x, msg.y);
//				outtextxy(200, 200, "鼠标左键落下");
//				break;
//			case WM_RBUTTONDOWN:
//				//鼠标在框中右键打印haha和坐标
//				if (msg.x > 200 && msg.x < 500 && msg.y>50 && msg.y < 100)
//				{
//					printf("haha\n");
//				}
//				printf("右键坐标是（%d,%d）\n", msg.x, msg.y);
//				outtextxy(200, 200, "鼠标右键落下");
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
//	//关闭窗口--无参数
//	closegraph();
//
//	return 0;
//}
