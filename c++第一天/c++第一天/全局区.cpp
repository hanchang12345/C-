#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
////全局变量
//int g_a = 10;
//int g_b = 10;
//
////全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
// 
//int main()
//{
//
//	//int a = 10;
//	//int b = 10;
//	////64位的电脑，地址是8个字节，强转成int会截断
//	//cout << "局部变量a的地址是：" << (long long) & a << endl;
//	//cout << "局部变量b的地址是：" << (long long)&b << endl;
//	//cout << "全局变量g_a的地址是：" << (long long)&g_a << endl;
//	//cout << "全局变量g_b的地址是：" << (long long)&g_b << endl;
//	////静态变量
//	//static int c = 10;
//	//static int d = 10;
//	//cout << "静态变量c的地址是：" << (long long)&c << endl;
//	//cout << "静态变量d的地址是：" << (long long)&d << endl;
//	////常量
//	////1.字符串常量
//	//cout << "字符串常量的地址是：" << (long long)&"hello world" << endl;
//	////2.const修饰的变量
// 
//	////const 修饰的全局变量
//	//cout << "全局常量c_g_a的地址是：" << (long long)&c_g_a << endl;
//	//cout << "全局常量c_g_b的地址是：" << (long long)&c_g_b << endl;
//	
//	////const 修饰的局部变量
//	//const int c_l_a = 10;
//	//const int c_l_b = 10;
//	//cout << "局部常量c_l_a的地址是：" << (long long)&c_l_a << endl;
//	//cout << "局部常量c_l_b的地址是：" << (long long)&c_l_b << endl;
//	////局部常量和局部变量的地址在同一个区，不在全局区
//	return 0;
//}