#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////C++中成员变量和成员函数是分开存储的
////每一个非静态成员函数也只有一份函数实现
//
//
////谁调用this指针就指向谁
////this指针隐含在每一个成员函数内
////this指针直接用，不需要定义或声明
//
////用途：
////1.解决名称冲突
////2.返回对象本身 *this
//
//class Person
//{
//public:
//	void func(int age)
//	{
//		//this指针指向的是被调用的成员函数所属的对象
//		this->age = age;
//	}
//	//用值的方式返回会创建一个新的对象，调用拷贝构造函数
//	//用引用的方式返回会返回原来的对象，不会创建新对象
//	Person& PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//		//*this返回的是调用函数的对象本身
//		return *this;
//	}
//	~Person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	Person p;
//	p.age = 10;
//	p.func(100);
//	//名称混淆了，age = age是func函数的age，不是对象的age
//	//解决方法：
//	//1.每个成员变量前都加上一个特定的符号
//	//2.在成员变量前加上this->,例如 this->age = age
//	cout << "p的年龄是：" << p.age << endl;
//}
//void test02()
//{
//	Person p1;
//	p1.age = 10;
//	Person p2;
//	p2.age = 15;
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2的年龄是：" << p2.age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
