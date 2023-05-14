#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//动物类
class Animal
{
public:
	int m_Age;
};

//利用虚继承解决菱形继承的问题
//在继承之前加上 virtual关键字，变成虚继承
//Animal叫虚基类
//虚继承的数据只有一个
//虚继承继承的是vbptr（虚基类指针）指向的是虚基类表（vbtable）
//虚基列表记录的是偏移量，加上偏移量之后会指向唯一的数据
// 
// 
//羊类
class Sheep:virtual public Animal
{};
//驼类
class Tuo :virtual public Animal
{};
//羊驼类
class SheepTuo :public Sheep, public Tuo
{};

void test01()
{
	SheepTuo st;
	//需要加上作用域来区分那个父类的成员
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << "st.Sheep::m_Age =" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age =" << st.Tuo::m_Age << endl;
	//这份数据有两份，但我们只需要一份，资源浪费
	cout << "st.m_Age= " << st.m_Age << endl;
}
int main()
{
	test01();
	return 0;
}