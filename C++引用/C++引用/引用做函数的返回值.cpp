#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//ע�����
//1.��Ҫ���ؾֲ�����������
//�༭�����ܻᱣ��һ��
//int& test1()
//{
//	int a = 10;//����ջ��
//	return a;
//}
//2.�����ĵ��ÿ�����Ϊ��ֵ
//int& test2()
//{
//	static int a = 10;//����ȫ����
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
//	//2.�������������õĺ��������ÿ�����Ϊ��ֵ
//	//ǰ���Ƿ��صı������Ǿֲ�����
//	cout << "ref2= " << ref2 << endl;
//	cout << "ref2= " << ref2 << endl;
//	return 0;
//}