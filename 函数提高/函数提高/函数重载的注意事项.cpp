#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//�������ص�ע������
//1. ����ʱ��������
void func(int& a)//int &a=10 �Ƿ�
{
	cout << "func(int &a )����������" << endl;
}

void func(const int& a)//const int &a=10 �Ϸ�
{
	cout << "func(const int &a )����������" << endl;
}

//2.����ʱ����Ĭ�ϲ���

void func2(int a)
{
	cout << "func2(int a)�����ĵ���" << endl;
}
void func2(int a,int b=10)
{
	cout << 
		"func2(int a)�����ĵ���" << endl;
}
int main()
{
	int a = 10;
	func(a);//���ò���const�ĺ�������Ϊ������һ���ɶ���д�ı���

	func(10);//���ô�const�ĺ��� ����Ϊ������һ��ֻ�ɶ�����д�ĳ���

	//func2(10);
	//func2��������ʱ����֪��������һ��func2�������ж�����
	//func2(10,20);//��������������������
	
	//���飺��������ʱ��Ҫ����Ĭ�ϲ���


	return 0;
}