#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//new关键字
//delete关键字是释放开辟的堆区内存的关键字
//delete 指向开辟空间的指针

//C语言是malloc和free函数进行开辟和释放

//new创建一个变量
//int* func()
//{
//	//这个指针本质上还是在栈区，保留的数据在堆区
//	//下一次引用时可以直接找到堆区的数据
//	//new 类型(数字)-》开辟一个某类型的变量，变量存括号里的数字
//	int* p = new int(10);
//	return p;
//}
////new创建一个数组
//int* numgroup()
//{ 
//	int* arr = new int[10];
//	return arr;
//
//}
//void test()
//{
//	//调用变量函数
//	//int* p = func();
//	//cout << *p << endl;
//	//cout << *p << endl;
//	//cout << *p << endl;
//	//cout << *p << endl;
//	//delete p;
//	
//	//危险！！！
//	//cout << *p << endl;
//	
//	//调用数组函数
//	int* arr = numgroup();
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 10;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放数组
//	//释放数组时要在delete后面加一个[]
//	delete[] arr;
//}
//int main()
//{
//
//	//堆区：
//	//c++在堆区开辟数据用new关键字
//	//new 类型（大小）返回的是类型对应的指针
//	//delete 释放掉开辟的内存
//
//	//函数声明：类型 函数名(参数);
//	void test();
//
//	//函数调用
//	test();
//	//int* pc = func();
//	//*pc = 12;
//	//cout << *pc << endl;
//
//	return 0;
//}