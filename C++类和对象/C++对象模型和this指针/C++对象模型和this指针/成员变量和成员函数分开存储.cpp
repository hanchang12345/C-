#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////C++中只有非静态的成员变量才是类的对象
////C++成员变量和成员函数是分开存储的
//
//class Person
//{
//	int m_A;//非静态的成员变量，是类的对象
//
//	static int m_b;//静态成员变量，不是类的对象
//
//	void func() {};//成员函数，不是类的对象
//
//	static void func2() {};//静态成员函数，不是类的对象
//};
//void test01()
//{
//	//C++编辑器会给空对象分配一个字节，区分空对象的内存位置
//	Person p;
//	cout << "空对象的大小为：" << sizeof(p) << endl;
//}
//
//void test02()
//{
//
//	Person p1;
//	//对象的大小是4个字节，就是字面意义上的4个字节
//	//加入静态成员变量后还是4，说明静态成员变量不是类的对象
//	cout << "对象的大小为：" << sizeof(p1) << endl;
//}
//int main()
//{
//	//test01();
//
//	test02();
//	return 0;
//}
