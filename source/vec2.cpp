#include "vec2.hpp"

Vec2::Vec2() : x_(0.0f), y_(0.0f)
{}

Vec2::Vec2(float x, float y) 
    : x_(x), y_(y)
{}

Vec2::~Vec2()
{}

float Vec2::GetX() const
{
    return x_;
}
float Vec2::GetY() const
{
    return y_;
}

void Vec2::SetX(const float x)
{
    x_ = x;
}
void Vec2::SetY(const float y)
{
    y_ = y;
}

int main()
{
    Vec2 a;
    Vec2 b{5.1f, -9.3f};
    std::cout << a.GetX() << "\n";
    std::cout << a.GetY() << "\n";


    std::cout << b.GetX() << "\n";
    std::cout << b.GetY() << "\n";
}