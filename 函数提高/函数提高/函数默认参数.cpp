#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
////c++�к�������Ĭ��ֵ
////�﷨���������� ������������ֵ1=Ĭ��ֵ��{}
//
////ע������
////1.C++�涨������β��ұ߿�ʼ��Ĭ��ֵ
//// int func(int a=10,int b,int c)//error
//// {
////		return a+b+c;
//// }
////2.�����������������Ĭ�ϲ�����������ʵ�־Ͳ�����Ĭ�ϲ���
////������ʵ��ֻ����һ����Ĭ��ֵ-->�༭�����ᱨ�������в��ɹ�
////��������
//int func(int a = 10, int b = 10);
////����ʵ��
//int func(int a = 10, int b = 20)
//{
//	return a + b;
//}
////Ĭ�ϲ����е�����£��Ҵ���ֵ�����ҵ�ֵ��û������Ĭ��ֵ
//int add(int a, int b=20, int c=30)
//{
//	return a + b + c;
//}
//int main()
//{
//	cout<<add(10)<<endl;
//	cout << func() << endl;
//	return 0;
//}
