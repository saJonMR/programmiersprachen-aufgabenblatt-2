#include "vec2.hpp"

Vec2::Vec2() : x_(0.0f), y_(0.0f)
{}

Vec2::Vec2(float x, float y) 
    : x_(x), y_(y)
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

Vec2& Vec2::operator/=(float s)
{
    x_ /= s;
    y_ /= s;
    return(*this);
}

Vec2 operator+(const Vec2 &u, const Vec2 &v)
{
    Vec2 r(u);
    r += v;
    return r;
}

Vec2 operator-(const Vec2 &u, const Vec2 &v)
{
    Vec2 r(u);
    r -= v;
    return r;
}

Vec2 operator*(const Vec2 &u, float s)
{
    return Vec2(u.GetX() * s, u.GetY() * s);
}

Vec2 operator/(const Vec2 &u, float s)
{
    return Vec2(u.GetX() / s, u.GetY() / s);
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
    std::cout << v1 << "--------------------yeet \n";

    Vec2 v3(1, 2);
    Vec2 v4(2, 3);
    //v3 *= v4; //(2, 6)
    //std::cout << v3 << "-------yeet \n";

    Vec2 v5(4, -2);
    Vec2 v6(1, 1);
    v5 -= v6; //(3, -3)
    std::cout << v5 << "-----------------------------------------yeet \n";

    Vec2 v7(63, 20);
    Vec2 v8(21, 10);
    //v7 /= v8; //(3, 2)
    //std::cout << v5 << "------------------------yeet \n";

    Vec2 v9(4, 8);
    Vec2 v10(12, 7);
    Vec2 v11;
    v11 = v9 + v10; //(15, 16)
    std::cout << v11 << "-------------yeet \n";

    Vec2 v12(4, 8);
    Vec2 v13(12, 7);
    Vec2 v14;
    v12 = v13 + v14; //(12, 7)
    std::cout << v12 << "------------------------------yeet \n";

    Vec2 v15(2, 0);
    float s = 4;
    Vec2 v16;
    v16 = v15 * s;
    std::cout << v16 << "----------yeet!\n";

    Vec2 v17(0, 8);
    Vec2 v18;
    v18 = v17 / s;
    std::cout << v18 << "-------------------------------------------------------------yeet!\n";
}