#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//class Person
//{
//public:
//	void ShowClassName()
//	{
//		cout << "this is a Person class" << endl;
//	}
//
//	void ShowPersonAge()
//	{
//		//属性前默认加了一个 this->来说明这是类的属性
//		//报错的原因是传入的指针是NULL
//		
//		//解决方案：
//		if (this == NULL)
//		{
//			return;
//		}
//
//		cout << "age=: "<<m_age << endl;
//	}
//	int m_age=10;
//};
//
//void test01()
//{
//	Person* p=NULL;
//	p->ShowClassName();
//	p->ShowPersonAge();//error
//}
//
//int main()
//{
//	test01();
//	return 0;
//}