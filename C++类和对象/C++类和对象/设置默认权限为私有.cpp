// #include <iostream>
// using namespace std;
// #include <string>
// //好处：
// //1.设为私有权限更安全
// //一般会有一个接口来设置
// //2.检测数据的有效性
// class Person
// {
// public:
// //修改姓名
//     void setName(string name)
//     {
//         Name = name;
//     }
// //获取姓名
//     string getName()
//     {
//         return Name;
//     }   
// //读取ID
//     int getID()
//     {
//         return Id;
//     }
// //修改情人
//     void changeLover(string newLovername)
//     {
//         Lover = newLovername;
//     }
// //获取情人的姓名
//     string getLoverName()
//     {
//         return Lover;
//     } 
//     //获取年龄
//     int getAge()
//     {
//         return Age;
//     }
//     //修改年龄
//     void setAge(int newAge)
//     {
//         if(newAge>=0&&newAge<=150)
//         {
//             Age = newAge;
//         }
//         else
//         {
//             Age = 0;
//             cout << "error" << endl;
//         }
            
//     }

// private:
//     string Name;//可读可写
//     int Id=12345;//可读不可写
//     string Lover="wangwu";//可写可读
//     int Age=18;//1.可读可写 2.有范围0~150
// };

// int main()
// {
//     Person P1;
//     P1.setName("zhangsan");
//     cout << "人名：" << P1.getName() << endl;
//     cout << "ID: " << P1.getID() << endl;
//     P1.changeLover("lisi");
//     cout << "现情人为：" << P1.getLoverName() << endl;
//     P1.setAge(2000);
//     cout << "年龄：" << P1.getAge() << endl;
//     return 0;
// }
