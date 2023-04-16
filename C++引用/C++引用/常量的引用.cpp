#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//常量引用：修饰形参，防止误操作
void print(int& a)
{
	a = 10000;
	cout << a << endl;
}
int main()
{
	//int a = 10;
	//引用必须引用一块合法的内存空间
	//int& b = a;
	//编辑器把代码转化为 int temp=10；const int& c=temp;
	//const int& c = 10;
	//c = 20;变为只读状态，不可以修改

	int a = 10;
	cin >> a;
	cout << a << endl;
	print(a);
	return 0;
}