#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//������
class Animal
{
public:
	int m_Age;
};

//������̳н�����μ̳е�����
//�ڼ̳�֮ǰ���� virtual�ؼ��֣������̳�
//Animal�������
//��̳е�����ֻ��һ��
//��̳м̳е���vbptr�������ָ�룩ָ�����������vbtable��
//����б��¼����ƫ����������ƫ����֮���ָ��Ψһ������
// 
// 
//����
class Sheep:virtual public Animal
{};
//����
class Tuo :virtual public Animal
{};
//������
class SheepTuo :public Sheep, public Tuo
{};

void test01()
{
	SheepTuo st;
	//��Ҫ�����������������Ǹ�����ĳ�Ա
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << "st.Sheep::m_Age =" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age =" << st.Tuo::m_Age << endl;
	//������������ݣ�������ֻ��Ҫһ�ݣ���Դ�˷�
	cout << "st.m_Age= " << st.m_Age << endl;
}
int main()
{
	test01();
	return 0;
}