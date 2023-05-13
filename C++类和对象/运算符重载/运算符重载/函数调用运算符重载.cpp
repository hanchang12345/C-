#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//函数调用运算符()也可以重载
//重载的函数叫做仿函数
//仿函数没有固定的写法

class MyPrint
{
public:
	//仿函数
	void operator()(string str)
	{
		cout << str << endl;
	}
};
//函数
void MyPrint01(string str)
{
	cout << str << endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint("hello world");

	MyPrint01("hello world");
}

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myADD;
	int ret = myADD(100, 100);
	cout << ret << endl;
	//匿名函数调用
	//MyAdd()是匿名函数，运行完之后会自动释放掉
	cout << MyAdd()(100, 100) << endl;

}
int main()
{
	//test01();
	test02();
	return 0;
}
