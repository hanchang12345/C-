#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//c++������������ͬ

//������
//1.��������ͬ
//2.�������ڵ���������ͬ 
//3.�����βε����Ͳ�ͬ�������βε�˳��ͬ�������βεĸ�����ͬ


//ע��:�����ķ���ֵ������Ϊ�������ص�����

//�βεĸ�����ͬ
void func()
{
	cout << "func �����ĵ���" << endl;
}
void func(int a)
{
	cout << "func (int a)�����ĵ���" << endl;
}
//�βε����Ͳ�ͬ
void func(double b)
{
	cout << "func (double b)�����ĵ���" << endl;
}
//�βε�˳��ͬ
void func(int a,double b)
{
	cout << "func (int a,double b)�����ĵ���" << endl;
}

void func(double a,int b)
{
	cout << "func (double a,int b)�����ĵ���" << endl;
}
//ע��:�����ķ���ֵ������Ϊ�������ص�����
//int func(double a, int b)
//{
//	cout << "func (double a,int b)�����ĵ���" << endl;
//}

int main()
{
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);

	return 0;
}


