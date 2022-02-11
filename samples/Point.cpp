#include "Point.h"

// コンストラクタの実装
Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

// x座標を返すゲッタの実装
double Point::getX()
{
    return this->x;
}

// y座標を返すゲッタの実装
double Point::getY()
{
    return this->y;
}

// + 演算子のオーバーロードの実装
Point Point::operator+(const Point &p)
{
    Point ans(this->x + p.x, this->y + p.y);
    return ans;
}

// - 演算子のオーバーロードの実装
Point Point::operator+(const Point &p)
{
    Point ans(this->x - p.x, this->y - p.y);
    return ans;
}
