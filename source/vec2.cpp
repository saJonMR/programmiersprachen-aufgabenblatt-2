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

std::ostream& operator<<(std::ostream& os, const Vec2& other)
{
    os << "Vec X: " << other.x_ << "\n";
    os << "Vec Y: " << other.y_ << "\n";

    return os;
}

std::istream& operator>>(std::istream& is, Vec2& other)
{
    std::cout << "Enter X: ";
    is >> other.x_;
    std::cout << "Enter Y: ";
    is >> other.y_;

    return is;
}

Vec2& Vec2::operator+=(const Vec2& v)
{
    x_ += v.GetX();
    y_ += v.GetY();
    return (*this);
}

Vec2& Vec2::operator-=(const Vec2& v)
{
    x_ -= v.GetX();
    y_ -= v.GetY();
    return (*this);
}

Vec2& Vec2::operator*=(float s)
{
    x_ *= s;
    y_ *= s;
    return (*this);
}

int main()
{
    Vec2 a;
    Vec2 b{5.1f, -9.3f};
    std::cout << a.GetX() << "\n";
    std::cout << a.GetY() << "\n";


    std::cout << b.GetX() << "\n";
    std::cout << b.GetY() << "\n";

    Vec2 v1(1, 2);
    Vec2 v2(3, 5);

    v1 += v2;  //(4, 7)
    std::cout << v1 << "yeet \n";

    Vec2 v3(1, 2);
    Vec2 v4(2, 3);

    v3 *= v4;
    std::cout << v3 << "yeet \n";
    

}