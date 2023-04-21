// #include<iostream>
// using namespace std;
// //累的

// //设计一个立方体类
// //长，宽，高
// //表面积 体积

// class  Ti
// {
// private:
//     int Length;
//     int Width;
//     int Height;

// public:
//     //成员函数测试
//     bool IsSame(Ti& ti)
//     {
//         if (Length == ti.getLength() && Width == ti.getWidth() && Height == ti.getHeight())
//         {
//             return true;
//         }
//         else
//             return false;
//     }

//     void Set(int NewLength,int NewWidth,int NewHeight)
//     {
//         if(NewWidth<0||NewLength<0||NewHeight<0)
//             cout << "error" << endl;
//         if(NewWidth>NewLength)
//         {
//             int tmp = NewLength;
//             NewLength = NewWidth;
//             NewWidth = tmp;
//         }
//         Height = NewHeight;
//         Width = NewWidth;
//         Length = NewLength;
//     }
//     //获得长度
//     int getLength()
//     {
//         return Length;
//     }
//     // 获得宽度
//     int getWidth()
//     {
//         return Width;
//     }
//     //获取高度
//     int getHeight()
//     {
//         return Height;
//     }
//     // //修改长度
//     // void setLength(int NewLength)
//     // {
//     //     Length = NewLength;
//     // }
//     // //修改宽度
//     // void setWidth(int NewWidth)
//     // {
//     //     Width = NewWidth;
//     // }
//     // //修改高度
//     // void setHeight(int NewHeight)
//     // {
//     //     Height = NewHeight;
//     // }
//     // //检查长度和宽度是否合理
//     // void check()
//     // {
//     //     if(Width>Length)
//     //         Length = Width;
//     // }

//     //打印信息
//     void print()
//     {
//         cout << "长度：" << Length << endl;
//         cout << "宽度：" << Width << endl;
//         cout << "高度：" << Height << endl;
//     }
//     //体积
//     int getVolume()
//     {
//         return Width * Height * Length;
//     }
//     //表面积
//     int getSurfaceArea()
//     {
//         return 2 * (Length * Width + Length * Height + Width * Height);
//     }
// };

// //判断两个立方体是否相等
// //这里只是简单地判断，无法解决放倒等问题
// bool check(Ti& ti,Ti& ti2)
// {
//     if(ti.getLength()==ti2.getLength()&&ti.getWidth()==ti2.getWidth()&&ti.getHeight()==ti2.getHeight())
//     {
//         return true;
//     }
//     else
//         return false;
// }
// int main()
// {

//     Ti ti;
//     ti.Set(10, 20, 30);
//     ti.print();
//     cout << "体积：" << ti.getVolume() << endl;
//     cout << "表面积:" << ti.getSurfaceArea() << endl;
//     Ti ti2;
//     ti2.Set(10, 20, 30);
//     ti2.print();
//     cout << "体积：" << ti2.getVolume() << endl;
//     cout << "表面积:" << ti2.getSurfaceArea() << endl;
//     //全局函数
//     if(check(ti, ti2)==true)
//         cout << "全局函数：两个立方体相等" << endl;
//     else
//         cout << "全局函数：两个立方体不相等" << endl;
//     //成员函数//使用ti的判断函数传的是ti2
//     if (ti.IsSame(ti2) == true)
//         cout << "成员函数：两个立方体相等" << endl;
//     else
//         cout << "成员函数：两个立方体不相等" << endl;
//     return 0;
//  }
