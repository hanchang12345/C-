#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//数组类型+数组名[元素个数]
//数组类型+数组名[]={内容}
//数组类型+数组名[元素个数]={内容}

//int main()
//{
//
//	int num = 1;
//	for (num = 1; num <= 100; num++)
//	{
//		if ((num % 10==7) || (num / 10==7))
//		{
//			cout << num << endl;
//		}
//		if (num % 7 == 0)
//		{
//			cout << num << endl;
//		}
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	int ret = a > b ? (a > c ? a : c) : (b > c ? b : c);//返回的是变量，可以赋值
//	if (a == ret)
//	{
//		cout << "a的体重最大，是：" << ret << endl;
//	}
//	else if (b == ret)
//	{
//		cout << "b的体重最大，是：" << ret << endl;
//	}
//	else 
//	{
//		cout << "c的体重最大，是：" << ret << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cout << "请输入分数:" << endl;
//	cin >> score;
//	if (score > 600)
//	{
//		if (score > 680)
//		{
//			cout << "清华大学" << endl;
//		}
//		else if (score > 650)
//		{
//			cout << "北京大学" << endl;
//		}
//		else
//		{
//			cout << "人大" << endl;
//		}
//	}
//	else if (score > 500)
//	{
//		cout << "二本" << endl;
//	}
//	else if (score > 400)
//	{
//		cout << "三本" << endl;
//	}
//	else
//	{
//		cout << "没考上本科" << endl;
//	}
//
//	return 0;
//}
// 
// 
//逻辑运算符
// ！- 非（真变假，假变真）
// && -与（并且 全真为真，有假即假）（为假后方不执行）
// || =或（或者 有真必真，全假为假）（为真后方不执行）

//++ 在前就先加再赋值 ++在后就先赋值再加 

// %的除数不能为0，小数不能取模运算
// /的除数不能为0，小数可以相除，可以得到小数


//输入-cin>>变量名
//int main()
//{
//	////整形
//	//int a = 10;
//	//cout << "请输入：" << endl;
//	//cin >> a;
//	//cout << "a的值是：" << a << endl;
//	// 
//	//浮点型
//	//double d = 3.14;
//	//cout << "请输入：" << endl;
//	//cin >> d;
//	//cout << "d的数值：" << d << endl;
//
//	//string str = "hello";
//	//cout << "请输入：" << endl;
//	//cin >> str;
//	//cout << str << endl;
//	return 0;
//}

////布尔类型 bool
////bool只占1个字节
////true 1 false 0
//int main()
//{
//	bool flag = true;
//	cout << flag << endl;
//	cout <<" bool的大小" <<sizeof(bool)<< endl;
//	flag = false;
//	cout << flag << endl;
//
//	return 0;
//}
////c++输出字符串有两种方式
////1.C语言型的
////2.c++型的
//int main()
//{
//	//1.C语言型
//	char ch[] = "hello world";
//	//变量类型+变量名[]="内容"
//	cout << ch << endl;
//	//2.C++型
//	string ch2 = "hello world";
//	//string + 变量名="内容"
//	//引头文件#include<string>
//	//VS2022已经不需要了，但是还是要引
//	cout << ch2 << endl;
//	system("pause");
//	return 0;
//}
//转义字符 \n-换行 \\输出\ \t水平制表符（4个空格）

//short(2个字节)int（4个字节）
//long（4个字节）long long（8个字节）
//float（4个字节）double（8个字节）
//char（1个字节）
//a-97 A-65
// 
// 
//名字（标识符）的命名规则
//1.标识符不能是变量类型
//2.标识符只能有数字 字母 下划线组成
//3.标识符第一个字符不能是数字
//4.标识符区分大小写
//int main()
//{
//	//1.标识符不能是变量类型
//	//int int = 12;//err
//	//2.标识符只能有数字 字母 下划线组成
//	int a = 10;
//	int a_b = 10;
//	int a10b = 10;
//	//3.标识符第一个字符不能是数字
//	//int 10an = 10;//err
//
//	system("pause");
//	return 0;
//}


//常量1.define定义的宏常量
//	  2.const修饰的变量
//#define day 7
//int main()
//{
//	//day = 14;//err
//	cout << "一周有：" << day << " 天" << endl;
//	const int a = 10;
//	//a = 20;//err
//
//	//int a = 10;
//	//cout << "a= " << a << endl;
//
//	//cout << "hello world\n" << endl;
//	//system("pause");
//	return 0;
//}

