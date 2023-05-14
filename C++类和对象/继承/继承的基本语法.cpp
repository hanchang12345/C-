#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
////继承的好处：可以节约大量的代码，减少重复的代码
////基本语法：class 子类 :继承方式 父类
////每一个类里都要有权限，否则访问不到
//
////子类也叫派生类
////父类也叫基类
//
////子类成员有两部分
////1.从基类继承来的：共性
////2.自己实现的：个性
//
//////一般实现
//////JAVA页面
////class JAVA
////{
////public:
////	void header()
////	{
////		cout << "这是公共的头部" << endl;
////	}
////	void footer()
////	{
////		cout << "这是公共的底部" << endl;
////	}
////	void lefter()
////	{
////		cout << "这是公共的左侧标题栏" << endl;
////	}
////	void contect()
////	{
////		cout << "这是JAVA的视频下载内容" << endl;
////	}
////};
//////Python页面
////class Python
////{
////public:
////	void header()
////	{
////		cout << "这是公共的头部" << endl;
////	}
////	void footer()
////	{
////		cout << "这是公共的底部" << endl;
////	}
////	void lefter()
////	{
////		cout << "这是公共的左侧标题栏" << endl;
////	}
////	void contect()
////	{
////		cout << "这是Python的视频下载内容" << endl;
////	}
////};
//////CPP的页面
////class CPP
////{
////public:
////	void header()
////	{
////		cout << "这是公共的头部" << endl;
////	}
////	void footer()
////	{
////		cout << "这是公共的底部" << endl;
////	}
////	void lefter()
////	{
////		cout << "这是公共的左侧标题栏" << endl;
////	}
////	void contect()
////	{
////		cout << "这是CPP的视频下载内容" << endl;
////	}
////};
//
////继承实现：
//class BasePoint
//{
//	public:
//		void header()
//		{
//			cout << "这是公共的头部" << endl;
//		}
//		void footer()
//		{
//			cout << "这是公共的底部" << endl;
//		}
//		void lefter()
//		{
//			cout << "这是公共的左侧标题栏" << endl;
//		}
//};
////JAVA页面
//class JAVA :public BasePoint
//{
//public:
//	void contect()
//	{
//		cout << "这是JAVA的视频下载内容" << endl;
//	}
//};
////Python页面
//class Python :public BasePoint
//{
//public:
//	void contect()
//	{
//		cout << "这是Python的视频下载内容" << endl;
//	}
//};
////CPP页面
//class CPP :public BasePoint
//{
//public:
//	void contect()
//	{
//		cout << "这是CPP的视频下载内容" << endl;
//	}
//};
//void test01()
//{
//	//打印JAVA的内容
//	JAVA ja;
//	ja.header();
//	ja.footer();
//	ja.lefter();
//	ja.contect();
//	cout << "------------------------------"<< endl;
//	//打印Python的内容
//	Python py;
//	py.header();
//	py.footer();
//	py.lefter();
//	py.contect();
//	cout << "------------------------------" << endl;
//	//打印CPP的内容
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.lefter();
//	cpp.contect();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
