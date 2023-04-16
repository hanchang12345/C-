#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//常量指针就是一个指向常量的指针，所以当然不能通过指针修改常量
//引用的本质就是一个常量指针
//int引用的C语言实现int* const p=& 变量
//int main()
//{
//	int a = 10;
//	int& b = a;//编辑器会自动转换成int* const b=&a
//
//	b = 20;//本质上是就是指针引用 *b=20
//	return 0;
//}
//
