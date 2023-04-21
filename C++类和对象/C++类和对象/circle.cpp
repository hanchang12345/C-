#include"circle.h"
// 设计一个圆类

    // 设置半径
    void Circle::setR(int r)
    {
        if (r < 0)
        {
            cout << "error" << endl;
        }
        R = r;
    }
    // 获取半径
    int Circle::getR()
    {
        return R;
    }
    // 设置圆心
    void Circle::setCenter(Point c)
    {
        m_Center = c;
    }
    // 获取圆心
    Point Circle::getCenter()
    {
        return m_Center;
    }

