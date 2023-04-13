#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// x64下编辑器保存了数据
//x86下编辑器只保留了一次数据
//int* fun()
//{
//	int abc = 10;
//	return &abc;
//}
//int main()
//{
//	
//
//	//栈区：数据由编译器管理开辟和释放
//	//栈区：局部变量,局部常量，函数形参
//	//栈区注意事项:不要返回局部变量的地址（已释放，野指针）
//
//	//int* p = fun();
//	//cout << *p << endl;
//	//cout << *p << endl;
//	//cout << *p << endl;
//	return 0;
//}