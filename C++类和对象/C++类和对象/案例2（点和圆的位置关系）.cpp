#include<iostream>
using namespace std;
//#include"point.h"
//#include"circle.h"
//设计一个点类
 class Point
{
public:
    // 设置X坐标
    void setX(int x)
    {
        m_X = x;
    }
    // 获取X坐标
    int getX()
    {
        return m_X;
    }
    // 设置Y坐标
    void setY(int y)
    {
        m_Y = y;
    }
    // 获取Y坐标
    int getY()
    {
        return m_Y;
    }

private:
    int m_X;
    int m_Y;
};

//设计一个圆类
class Circle
{
public:
    //设置半径
    void setR(int r)
    {
        if(r<0)
        {
            cout << "error" << endl;
        }
        R = r;
    }
    //获取半径
    int getR()
    {
        return R;
    }
    //设置圆心
    void setCenter(Point c)
    {
        m_Center = c;
    }
    //获取圆心
    Point getCenter()
    {
        return m_Center;
    }
private:
    //圆心
    Point m_Center;
    //半径
    int R;
};

//判断圆和点的关系
void judge(Circle& C,Point& p)
{
    //算坐标的距离
    int distance = ((C.getCenter().getX() - p.getX()) * (C.getCenter().getX() - p.getX())) + ((C.getCenter().getY() - p.getY()) * (C.getCenter().getY() - p.getY()));
    //算半径的平方
    int R_distance = C.getR() * C.getR();
    //判断
    if(distance>R_distance)
    {
        cout << "点在圆外" << endl;
    }
    else if(distance==R_distance)
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}
int main()
{
    //创建圆
    Circle c;
    c.setR(10);
    //创建圆心
    Point center;
    //设置的圆心坐标是（10,10）
    center.setX(10);
    center.setY(10);
    c.setCenter(center);
    //创建点
    Point p;
    p.setX(10);
    p.setY(10);
    //判断
    judge(c, p);
    return 0;
}