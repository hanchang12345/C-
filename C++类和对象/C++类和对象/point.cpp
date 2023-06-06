#include"point.h"
// 设计一个点类
// Point::的意思是函数是point类的成员函数
//::前是函数所在的作用域
// 设置X坐标
void Point::setX(int x)
{
    m_X = x;
    }
    // 获取X坐标
    int Point::getX()
    {
        return m_X;
    }
    // 设置Y坐标
    void Point::setY(int y)
    {
        m_Y = y;
    }
    // 获取Y坐标
    int Point::getY()
    {
        return m_Y;
    }
