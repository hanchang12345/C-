#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#define MAX 1000
void menu()
{
	cout << "***********************" << endl;
	cout << "*****1, 添加联系人*****" << endl;
	cout << "*****2, 打印联系人*****" << endl;
	cout << "*****3，删除联系人*****" << endl;
	cout << "*****4，查找联系人*****" << endl;
	cout << "*****5，修改联系人*****" << endl;
	cout << "*****6，清空联系人*****" << endl;
	cout << "*****0.退出通讯录*****" << endl;
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
//添加
void Add(contact* con)
{
	if (con->size == MAX)
	{
		cout << "通讯录已满，添加失败" << endl;
	}
	else
	{
		cout << "添加人的名字" << endl;
		string name;
		cin >> name;
		con->PeoInfo[con->size].Name = name;
		cout << "添加年龄" << endl;
		int age;
		cin >> age;
		con->PeoInfo[con->size].Age = age;
		cout << "添加性别" << endl;
		int sex;
		cout << "1--男性" << endl;
		cout << "2--女性" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				con->PeoInfo[con->size].Sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}
		
		cout << "添加电话" << endl;
		string phone;
		cin >> phone;
		con->PeoInfo[con->size].Phone = phone;
		cout << "添加地址" << endl;
		string addr;
		cin >> addr;
		con->PeoInfo[con->size].Addr = addr;
	}
	con->size++;
	system("pause");
	system("cls");

}
//打印
void print(contact* con)
{
	if (con->size == 0)
		cout << "通讯录为空" << endl;
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		cout << "名字：" << con->PeoInfo[i].Name << '\t';
		cout << "年龄：" << con->PeoInfo[i].Age << '\t';
		cout << "性别：" << (con->PeoInfo[i].Sex != 1 ? "女" : "男") << '\t';
		cout << "电话：" << con->PeoInfo[i].Phone << '\t';
		cout << "地址：" << con->PeoInfo[i].Addr << endl;

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
//删除
void Del(contact* con)
{
	cout << "请输入要删除人的名字" << endl;
	string name;
	cin >> name;
	int ret = Find(con, name);
	if (ret == -1)
	{
		cout << "删除人不存在" << endl;
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

//查找
void search(contact* con)
{
	cout << "请输入要查找人的名字" << endl;
	string name;
	cin >> name;
	int ret = Find(con, name);
	if (ret == -1)
	{
		cout << "查找人不存在" << endl;
	}
	else
	{
		cout << "名字：" << con->PeoInfo[ret].Name << '\t';
		cout << "年龄：" << con->PeoInfo[ret].Age << '\t';
		cout << "性别：" << (con->PeoInfo[ret].Sex != 1 ? "女" : "男") << '\t';
		cout << "电话：" << con->PeoInfo[ret].Phone << '\t';
		cout << "地址：" << con->PeoInfo[ret].Addr << endl;
	}
	system("pause");
	system("cls");
}
//修改
void modify(contact* con)
{
	cout << "请输入要修改人的名字" << endl;
	string name;
	cin >> name;
	int ret = Find(con, name);
	if (ret == -1)
	{
		cout << "修改人不存在" << endl;
	}
	else
	{
		cout << "修改人的名字" << endl;
		string name;
		cin >> name;
		con->PeoInfo[ret].Name = name;
		cout << "修改年龄" << endl;
		int age;
		cin >> age;
		con->PeoInfo[ret].Age = age;
		cout << "修改性别" << endl;
		int sex;
		cout << "1--男性" << endl;
		cout << "2--女性" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				con->PeoInfo[ret].Sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}

		cout << "修改电话" << endl;
		string phone;
		cin >> phone;
		con->PeoInfo[ret].Phone = phone;
		cout << "修改地址" << endl;
		string addr;
		cin >> addr;
		con->PeoInfo[ret].Addr = addr;
	}
	system("pause");
	system("cls");
}

//清空
void clear(contact* con)
{
	con->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//创建通讯录并初始化
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
			//添加
			Add(&con);
			break;
		case 2:
			print(&con);
			//打印
			break;
		case 3:
			Del(&con);
			//删除
			break;
		case 4:
			search(&con);
			//查找
			break;
		case 5:
			modify(&con);
			//修改
			break;
		case 6:
			//清空
			clear(&con);
			break;
		case 0:
			cout << "感谢你的使用，下次再见" << endl;
			system("pause");
			return 0;
		default:
			cout << "选择错误，请重新选择" << endl;
		}
	}
	system("pause");
	return 0;
}