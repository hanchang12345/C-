#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//注意事项：
//1.不要返回局部变量的引用
//编辑器可能会保留一次
//int& test1()
//{
//	int a = 10;//放在栈区
//	return a;
//}
//2.函数的调用可以作为左值
//int& test2()
//{
//	static int a = 10;//放在全局区
//	return a;
//}
//
//int main()
//{
//	//int& ref = test1();
//	//cout << "ref= " << ref << endl;
//	//cout << "ref= " << ref << endl;
//
//	int& ref2 = test2();
//	cout << "ref2= " << ref2 << endl;
//	cout << "ref2= " << ref2 << endl;
//	cout << "ref2= " << ref2 << endl;
//	cout << "ref2= " << ref2 << endl;
//	test2() = 1000;
//	//2.返回类型是引用的函数，调用可以作为左值
//	//前提是返回的变量不是局部变量
//	cout << "ref2= " << ref2 << endl;
//	cout << "ref2= " << ref2 << endl;
//	return 0;
//}