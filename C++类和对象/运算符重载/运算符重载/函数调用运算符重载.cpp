#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�������������()Ҳ��������
//���صĺ��������º���
//�º���û�й̶���д��

class MyPrint
{
public:
	//�º���
	void operator()(string str)
	{
		cout << str << endl;
	}
};
//����
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
	//������������
	//MyAdd()������������������֮����Զ��ͷŵ�
	cout << MyAdd()(100, 100) << endl;

}
int main()
{
	//test01();
	test02();
	return 0;
}
