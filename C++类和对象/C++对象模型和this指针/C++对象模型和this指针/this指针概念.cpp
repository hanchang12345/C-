#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////C++�г�Ա�����ͳ�Ա�����Ƿֿ��洢��
////ÿһ���Ǿ�̬��Ա����Ҳֻ��һ�ݺ���ʵ��
//
//
////˭����thisָ���ָ��˭
////thisָ��������ÿһ����Ա������
////thisָ��ֱ���ã�����Ҫ���������
//
////��;��
////1.������Ƴ�ͻ
////2.���ض����� *this
//
//class Person
//{
//public:
//	void func(int age)
//	{
//		//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//	//��ֵ�ķ�ʽ���ػᴴ��һ���µĶ��󣬵��ÿ������캯��
//	//�����õķ�ʽ���ػ᷵��ԭ���Ķ��󣬲��ᴴ���¶���
//	Person& PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//		//*this���ص��ǵ��ú����Ķ�����
//		return *this;
//	}
//	~Person()
//	{
//		cout << "������������" << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	Person p;
//	p.age = 10;
//	p.func(100);
//	//���ƻ����ˣ�age = age��func������age�����Ƕ����age
//	//���������
//	//1.ÿ����Ա����ǰ������һ���ض��ķ���
//	//2.�ڳ�Ա����ǰ����this->,���� this->age = age
//	cout << "p�������ǣ�" << p.age << endl;
//}
//void test02()
//{
//	Person p1;
//	p1.age = 10;
//	Person p2;
//	p2.age = 15;
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2�������ǣ�" << p2.age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
