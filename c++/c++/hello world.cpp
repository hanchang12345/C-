#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//��������+������[Ԫ�ظ���]
//��������+������[]={����}
//��������+������[Ԫ�ظ���]={����}

//int main()
//{
//
//	int num = 1;
//	for (num = 1; num <= 100; num++)
//	{
//		if ((num % 10==7) || (num / 10==7))
//		{
//			cout << num << endl;
//		}
//		if (num % 7 == 0)
//		{
//			cout << num << endl;
//		}
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	int ret = a > b ? (a > c ? a : c) : (b > c ? b : c);//���ص��Ǳ��������Ը�ֵ
//	if (a == ret)
//	{
//		cout << "a����������ǣ�" << ret << endl;
//	}
//	else if (b == ret)
//	{
//		cout << "b����������ǣ�" << ret << endl;
//	}
//	else 
//	{
//		cout << "c����������ǣ�" << ret << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cout << "���������:" << endl;
//	cin >> score;
//	if (score > 600)
//	{
//		if (score > 680)
//		{
//			cout << "�廪��ѧ" << endl;
//		}
//		else if (score > 650)
//		{
//			cout << "������ѧ" << endl;
//		}
//		else
//		{
//			cout << "�˴�" << endl;
//		}
//	}
//	else if (score > 500)
//	{
//		cout << "����" << endl;
//	}
//	else if (score > 400)
//	{
//		cout << "����" << endl;
//	}
//	else
//	{
//		cout << "û���ϱ���" << endl;
//	}
//
//	return 0;
//}
// 
// 
//�߼������
// ��- �ǣ����٣��ٱ��棩
// && -�루���� ȫ��Ϊ�棬�мټ��٣���Ϊ�ٺ󷽲�ִ�У�
// || =�򣨻��� ������棬ȫ��Ϊ�٣���Ϊ��󷽲�ִ�У�

//++ ��ǰ���ȼ��ٸ�ֵ ++�ں���ȸ�ֵ�ټ� 

// %�ĳ�������Ϊ0��С������ȡģ����
// /�ĳ�������Ϊ0��С��������������Եõ�С��


//����-cin>>������
//int main()
//{
//	////����
//	//int a = 10;
//	//cout << "�����룺" << endl;
//	//cin >> a;
//	//cout << "a��ֵ�ǣ�" << a << endl;
//	// 
//	//������
//	//double d = 3.14;
//	//cout << "�����룺" << endl;
//	//cin >> d;
//	//cout << "d����ֵ��" << d << endl;
//
//	//string str = "hello";
//	//cout << "�����룺" << endl;
//	//cin >> str;
//	//cout << str << endl;
//	return 0;
//}

////�������� bool
////boolֻռ1���ֽ�
////true 1 false 0
//int main()
//{
//	bool flag = true;
//	cout << flag << endl;
//	cout <<" bool�Ĵ�С" <<sizeof(bool)<< endl;
//	flag = false;
//	cout << flag << endl;
//
//	return 0;
//}
////c++����ַ��������ַ�ʽ
////1.C�����͵�
////2.c++�͵�
//int main()
//{
//	//1.C������
//	char ch[] = "hello world";
//	//��������+������[]="����"
//	cout << ch << endl;
//	//2.C++��
//	string ch2 = "hello world";
//	//string + ������="����"
//	//��ͷ�ļ�#include<string>
//	//VS2022�Ѿ�����Ҫ�ˣ����ǻ���Ҫ��
//	cout << ch2 << endl;
//	system("pause");
//	return 0;
//}
//ת���ַ� \n-���� \\���\ \tˮƽ�Ʊ����4���ո�

//short(2���ֽ�)int��4���ֽڣ�
//long��4���ֽڣ�long long��8���ֽڣ�
//float��4���ֽڣ�double��8���ֽڣ�
//char��1���ֽڣ�
//a-97 A-65
// 
// 
//���֣���ʶ��������������
//1.��ʶ�������Ǳ�������
//2.��ʶ��ֻ�������� ��ĸ �»������
//3.��ʶ����һ���ַ�����������
//4.��ʶ�����ִ�Сд
//int main()
//{
//	//1.��ʶ�������Ǳ�������
//	//int int = 12;//err
//	//2.��ʶ��ֻ�������� ��ĸ �»������
//	int a = 10;
//	int a_b = 10;
//	int a10b = 10;
//	//3.��ʶ����һ���ַ�����������
//	//int 10an = 10;//err
//
//	system("pause");
//	return 0;
//}


//����1.define����ĺ곣��
//	  2.const���εı���
//#define day 7
//int main()
//{
//	//day = 14;//err
//	cout << "һ���У�" << day << " ��" << endl;
//	const int a = 10;
//	//a = 20;//err
//
//	//int a = 10;
//	//cout << "a= " << a << endl;
//
//	//cout << "hello world\n" << endl;
//	//system("pause");
//	return 0;
//}

