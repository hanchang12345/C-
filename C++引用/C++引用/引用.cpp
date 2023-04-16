#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
//引用：给变量起别名->还是同一块空间
//语法：变量类型 & 别名=原名

//和指针的区别：const的位置不同
//指针 const可以改
//引用 const不可以改

//注意事项
//1.引用必须初始化
//2.初始化后不能改变
//int main()
//{
//	int a = 10;
//	//引用
//	int c= 103;
//	int& b = a;
//	b = c;
//	//b=c是赋值->不是更改
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//	
//	//cout << a << endl;
//	//cout << b << endl;
//	return 0;
//}
