//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////作用：配合友元可以输出自定义的数据类型
////左移运算符：<<
//
////左移运算符的重载一般不会使用成员函数实现
////因为无法实现cout在左边的情况
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	//左移运算符的重载一般不会使用成员函数实现
//	//因为无法实现cout在左边的情况
//	//void operator<<( cout )//p->operator(p)
//	//{
//	//}
//	Person(int c, int d)
//	{
//		this->m_c = c;
//		this->m_d = d;
//	}
//	int m_a;
//	int m_b;
//private:
//	int m_c;
//	int m_d;
//};
//
//ostream& operator<<(ostream& cout ,Person& p)
//{
//	cout << "p1的m_a:" << p.m_a << " p1的m_b:" << p.m_b<<endl;
//	cout << "p1的m_c:" << p.m_c << " p1的m_d:" << p.m_d<<endl;
//	return cout;
//}
//
//void test01()
//{
//	Person p1(20,20);
//	p1.m_a = 10;
//	p1.m_b = 10;
//	cout << p1<<endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}