#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//常函数：
//1.const修饰的成员函数是常函数
//2.常函数内不能修改成员属性
//3.成员属性加上mutable关键字后，在常函数内还可以修改

//常对象：
//1.const修饰的对象叫常对象
//2.常对象只能调用常函数

class Person
{
public:
	//在构造函数后面加上const就是常函数
	void ShowAge() const//const Person* const this;
	{
		//m_age = 190;
		m_b = 100;
		//this指针的本质是指针常量，不可以修改指向的内容，但可以改值
		// Person* const this;
		//如果再加上const修饰的话，值也不可改
		//const Person* const this;
		cout << "age: " << this->m_age << endl;
		cout << "m_b :" << m_b << endl;
	}
	void func()
	{

	}

	int m_age;
	mutable int m_b;//加了mutable之后在常函数中也可以修改m_b
};
void test01()
{
	Person p;
	p.ShowAge();
}

void test02()
{
	const Person p2;//对象前加const是常对象
	//p2.m_age = 10;//error
	p2.m_b = 10;//可修改

	//常对象只能调用常函数
	p2.ShowAge();
	//p2.func();//error
}
int main()
{

	test01();
	return 0;
}
