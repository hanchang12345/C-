#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//�������ã������βΣ���ֹ�����
void print(int& a)
{
	a = 10000;
	cout << a << endl;
}
int main()
{
	//int a = 10;
	//���ñ�������һ��Ϸ����ڴ�ռ�
	//int& b = a;
	//�༭���Ѵ���ת��Ϊ int temp=10��const int& c=temp;
	//const int& c = 10;
	//c = 20;��Ϊֻ��״̬���������޸�

	int a = 10;
	cin >> a;
	cout << a << endl;
	print(a);
	return 0;
}