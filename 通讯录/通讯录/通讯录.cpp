#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#define MAX 1000
void menu()
{
	cout << "***********************" << endl;
	cout << "*****1, �����ϵ��*****" << endl;
	cout << "*****2, ��ӡ��ϵ��*****" << endl;
	cout << "*****3��ɾ����ϵ��*****" << endl;
	cout << "*****4��������ϵ��*****" << endl;
	cout << "*****5���޸���ϵ��*****" << endl;
	cout << "*****6�������ϵ��*****" << endl;
	cout << "*****0.�˳�ͨѶ¼*****" << endl;
	cout << "***********************" << endl;

}
struct person
{
	string Name;
	int Age;
	int Sex;
	string Phone;
	string Addr;
};
struct contact
{
	struct person PeoInfo[MAX];
	int size;
};
//���
void Add(contact* con)
{
	if (con->size == MAX)
	{
		cout << "ͨѶ¼���������ʧ��" << endl;
	}
	else
	{
		cout << "����˵�����" << endl;
		string name;
		cin >> name;
		con->PeoInfo[con->size].Name = name;
		cout << "�������" << endl;
		int age;
		cin >> age;
		con->PeoInfo[con->size].Age = age;
		cout << "����Ա�" << endl;
		int sex;
		cout << "1--����" << endl;
		cout << "2--Ů��" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				con->PeoInfo[con->size].Sex = sex;
				break;
			}
			cout << "�����������������" << endl;
		}
		
		cout << "��ӵ绰" << endl;
		string phone;
		cin >> phone;
		con->PeoInfo[con->size].Phone = phone;
		cout << "��ӵ�ַ" << endl;
		string addr;
		cin >> addr;
		con->PeoInfo[con->size].Addr = addr;
	}
	con->size++;
	system("pause");
	system("cls");

}
//��ӡ
void print(contact* con)
{
	if (con->size == 0)
		cout << "ͨѶ¼Ϊ��" << endl;
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		cout << "���֣�" << con->PeoInfo[i].Name << '\t';
		cout << "���䣺" << con->PeoInfo[i].Age << '\t';
		cout << "�Ա�" << (con->PeoInfo[i].Sex != 1 ? "Ů" : "��") << '\t';
		cout << "�绰��" << con->PeoInfo[i].Phone << '\t';
		cout << "��ַ��" << con->PeoInfo[i].Addr << endl;

	}
	system("pause");
	system("cls");
}
int Find(contact* con, string name)
{
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (con->PeoInfo[i].Name == name)
			return i;
	}
	return -1;
}
//ɾ��
void Del(contact* con)
{
	cout << "������Ҫɾ���˵�����" << endl;
	string name;
	cin >> name;
	int ret = Find(con, name);
	if (ret == -1)
	{
		cout << "ɾ���˲�����" << endl;
	}
	else
	{
		int i = 0;
		for (i = ret; i < con->size; i++)
		{
			con->PeoInfo[i] = con->PeoInfo[i + 1];
		}
	}
	con->size--;
	system("pause");
	system("cls");
}

//����
void search(contact* con)
{
	cout << "������Ҫ�����˵�����" << endl;
	string name;
	cin >> name;
	int ret = Find(con, name);
	if (ret == -1)
	{
		cout << "�����˲�����" << endl;
	}
	else
	{
		cout << "���֣�" << con->PeoInfo[ret].Name << '\t';
		cout << "���䣺" << con->PeoInfo[ret].Age << '\t';
		cout << "�Ա�" << (con->PeoInfo[ret].Sex != 1 ? "Ů" : "��") << '\t';
		cout << "�绰��" << con->PeoInfo[ret].Phone << '\t';
		cout << "��ַ��" << con->PeoInfo[ret].Addr << endl;
	}
	system("pause");
	system("cls");
}
//�޸�
void modify(contact* con)
{
	cout << "������Ҫ�޸��˵�����" << endl;
	string name;
	cin >> name;
	int ret = Find(con, name);
	if (ret == -1)
	{
		cout << "�޸��˲�����" << endl;
	}
	else
	{
		cout << "�޸��˵�����" << endl;
		string name;
		cin >> name;
		con->PeoInfo[ret].Name = name;
		cout << "�޸�����" << endl;
		int age;
		cin >> age;
		con->PeoInfo[ret].Age = age;
		cout << "�޸��Ա�" << endl;
		int sex;
		cout << "1--����" << endl;
		cout << "2--Ů��" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				con->PeoInfo[ret].Sex = sex;
				break;
			}
			cout << "�����������������" << endl;
		}

		cout << "�޸ĵ绰" << endl;
		string phone;
		cin >> phone;
		con->PeoInfo[ret].Phone = phone;
		cout << "�޸ĵ�ַ" << endl;
		string addr;
		cin >> addr;
		con->PeoInfo[ret].Addr = addr;
	}
	system("pause");
	system("cls");
}

//���
void clear(contact* con)
{
	con->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//����ͨѶ¼����ʼ��
	struct contact con;
	con.size = 0;
	int input = 0;
	while (true)
	{
		menu();
		cin >> input;
		switch (input)
		{
		case 1:
			//���
			Add(&con);
			break;
		case 2:
			print(&con);
			//��ӡ
			break;
		case 3:
			Del(&con);
			//ɾ��
			break;
		case 4:
			search(&con);
			//����
			break;
		case 5:
			modify(&con);
			//�޸�
			break;
		case 6:
			//���
			clear(&con);
			break;
		case 0:
			cout << "��л���ʹ�ã��´��ټ�" << endl;
			system("pause");
			return 0;
		default:
			cout << "ѡ�����������ѡ��" << endl;
		}
	}
	system("pause");
	return 0;
}