//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////对于内置的数据类型，编译器会运算
////对于自定义的数据类型，编译器不会算，所以需要运算符重载
////运算符重载也可以发生函数重载
//
//
////编辑器取得名字是operator+
//// 
////1.通过成员函数来重载
////person operator+(person& p)
//// {
////		person temp;
////		temp.m_a=this->m_a + p.m_a;
////		temp.m_b=this->m_b + p.m_b;
////		return temp;
//// }
////简化为：person p3 =p1 + p2;
//
////2.通过全局函数来重载
////person operator+(person& p1,person& p2)
//// {
////		person temp;
////		temp.m_a=p1.m_a + p2.m_a;
////		temp.m_b=p2.m_b + p.m_b;
////		return temp;
//// }
////简化为：person p3 =p1 + p2;
////
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//public:
////1.通过成员函数来重载
////Person operator+(Person& p)
//// {
////		Person temp;
////		temp.m_A=this->m_A + p.m_A;
////		temp.m_B=this->m_B + p.m_B;
////		return temp;
//// }
//
//};
////1.通过成员函数来重载加号
////void test01()
////{
////	Person p1;
////	Person p2;
////	p1.m_A = 10;
////	p1.m_B = 10;
////	p2.m_A = 10;
////	p2.m_B = 10;
//// //本质:
////  Person p3=p1.operator+(p2);
//// //简化:
////	Person p3 = p1 + p2;
////	cout << "p3的m_A为：" << p3.m_A << endl;
////	cout << "p3的m_B为：" << p3.m_B << endl;
////
////}
//// 
//
//
////2.通过全局函数来重载加号
//Person operator+(Person& p1,Person& p2)
// {
//		Person temp;
//		temp.m_A=p1.m_A + p2.m_A;
//		temp.m_B=p1.m_B + p2.m_B;
//		return temp;
// }
////函数重载版本：
//Person operator+(Person& p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//void test02()
//{
//	Person p1;
//	Person p2;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	p2.m_A = 10;
//	p2.m_B = 10;
//	//本质：
//	Person p3 = operator+(p1, p2);
//	//简化：
//	//Person p3 = p1 + p2;
//	cout << "p3的m_A为：" << p3.m_A << endl;
//	cout << "p3的m_B为：" << p3.m_B << endl;
//	Person p4 = p1 + 100;
//	cout << "p4的m_A为：" << p4.m_A << endl;
//	cout << "p4的m_B为：" << p4.m_B << endl;
//}
//
//int main()
//{
////	test01();
//	test02();
//
//	return 0;
//}
