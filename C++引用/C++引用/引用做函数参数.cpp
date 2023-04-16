#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//引用和指针的区别：
//当引用作为一个函数形参时，它所引用的变量的生命周期必须保证在函数的执行期间内是有效的。
//在函数执行期间内，对于引用所指向的变量所进行的任何修改都将影响到函数调用方式中的原始变量。
//当函数返回后，引用所指向的变量仍然存在，因此可以继续访问它而不会报错。
//但是需要注意的是，如果引用所指向的变量是在函数中被销毁的局部变量，则在函数返回后访问该引用将会导致未定义的行为。



////1.值传递
//void MY_Swap1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
////2.地址传递
//void MY_Swap2(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
////3.引用传递
//void MY_Swap3(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//值传递-->函数的形参不影响实参
//	//MY_Swap1(a, b);
//
//	//地址传递-->函数的形参影响实参
//	//MY_Swap2(&a, &b);
//
//	//引用传递-->函数的形参影响实参
//	MY_Swap3(a, b);
//
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	return 0;
//}