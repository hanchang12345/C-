//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////�������õ��������ͣ�������������
////�����Զ�����������ͣ������������㣬������Ҫ���������
////���������Ҳ���Է�����������
//
//
////�༭��ȡ��������operator+
//// 
////1.ͨ����Ա����������
////person operator+(person& p)
//// {
////		person temp;
////		temp.m_a=this->m_a + p.m_a;
////		temp.m_b=this->m_b + p.m_b;
////		return temp;
//// }
////��Ϊ��person p3 =p1 + p2;
//
////2.ͨ��ȫ�ֺ���������
////person operator+(person& p1,person& p2)
//// {
////		person temp;
////		temp.m_a=p1.m_a + p2.m_a;
////		temp.m_b=p2.m_b + p.m_b;
////		return temp;
//// }
////��Ϊ��person p3 =p1 + p2;
////
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//public:
////1.ͨ����Ա����������
////Person operator+(Person& p)
//// {
////		Person temp;
////		temp.m_A=this->m_A + p.m_A;
////		temp.m_B=this->m_B + p.m_B;
////		return temp;
//// }
//
//};
////1.ͨ����Ա���������ؼӺ�
////void test01()
////{
////	Person p1;
////	Person p2;
////	p1.m_A = 10;
////	p1.m_B = 10;
////	p2.m_A = 10;
////	p2.m_B = 10;
//// //����:
////  Person p3=p1.operator+(p2);
//// //��:
////	Person p3 = p1 + p2;
////	cout << "p3��m_AΪ��" << p3.m_A << endl;
////	cout << "p3��m_BΪ��" << p3.m_B << endl;
////
////}
//// 
//
//
////2.ͨ��ȫ�ֺ��������ؼӺ�
//Person operator+(Person& p1,Person& p2)
// {
//		Person temp;
//		temp.m_A=p1.m_A + p2.m_A;
//		temp.m_B=p1.m_B + p2.m_B;
//		return temp;
// }
////�������ذ汾��
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
//	//���ʣ�
//	Person p3 = operator+(p1, p2);
//	//�򻯣�
//	//Person p3 = p1 + p2;
//	cout << "p3��m_AΪ��" << p3.m_A << endl;
//	cout << "p3��m_BΪ��" << p3.m_B << endl;
//	Person p4 = p1 + 100;
//	cout << "p4��m_AΪ��" << p4.m_A << endl;
//	cout << "p4��m_BΪ��" << p4.m_B << endl;
//}
//
//int main()
//{
////	test01();
//	test02();
//
//	return 0;
//}
