#pragma once
#include<iostream>
using namespace std;
#include"point.h"

// 设计一个圆类
class Circle
{
public:
    // 设置半径
    void setR(int r);

    // 获取半径
    int getR();

    // 设置圆心
    void setCenter(Point c);

    // 获取圆心
    Point getCenter();

private:
    // 圆心
    Point m_Center;
    // 半径
    int R;
};