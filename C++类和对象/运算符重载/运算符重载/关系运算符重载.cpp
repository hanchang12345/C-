#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	bool operator!=(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return false;
//		}
//		else
//			return true;
//	}
//	bool operator>(Person& p)
//	{
//		if (this->m_Age > p.m_Age)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	bool operator<(Person& p)
//	{
//		if (this->m_Age < p.m_Age)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//
//
//	int m_Age;
//	string m_Name;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	if (p1 == p2)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//	if (p1 != p2)
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	if (p1 > p2)
//	{
//		cout << "p1比p2年龄大" << endl;
//	}
//	else if(p1 < p2)
//	{
//		cout << "p1比p2的年龄小" << endl;
//	}
//	else
//	{
//		cout << "p1和p2一样大" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}