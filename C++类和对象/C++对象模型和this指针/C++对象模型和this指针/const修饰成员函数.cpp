#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//��������
//1.const���εĳ�Ա�����ǳ�����
//2.�������ڲ����޸ĳ�Ա����
//3.��Ա���Լ���mutable�ؼ��ֺ��ڳ������ڻ������޸�

//������
//1.const���εĶ���г�����
//2.������ֻ�ܵ��ó�����

class Person
{
public:
	//�ڹ��캯���������const���ǳ�����
	void ShowAge() const//const Person* const this;
	{
		//m_age = 190;
		m_b = 100;
		//thisָ��ı�����ָ�볣�����������޸�ָ������ݣ������Ը�ֵ
		// Person* const this;
		//����ټ���const���εĻ���ֵҲ���ɸ�
		//const Person* const this;
		cout << "age: " << this->m_age << endl;
		cout << "m_b :" << m_b << endl;
	}
	void func()
	{

	}

	int m_age;
	mutable int m_b;//����mutable֮���ڳ�������Ҳ�����޸�m_b
};
void test01()
{
	Person p;
	p.ShowAge();
}

void test02()
{
	const Person p2;//����ǰ��const�ǳ�����
	//p2.m_age = 10;//error
	p2.m_b = 10;//���޸�

	//������ֻ�ܵ��ó�����
	p2.ShowAge();
	//p2.func();//error
}
int main()
{

	test01();
	return 0;
}
