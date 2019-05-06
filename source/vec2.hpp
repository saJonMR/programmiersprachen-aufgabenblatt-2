#ifndef VEC2_HPP
#define VEC2_HPP
// Vec2 data type definition

#include <iostream>

struct Vec2
{
private:

    float x_, y_;

public:
    Vec2();
    Vec2(float x, float y);

    float GetX() const;
    float GetY() const;

    void SetX(const float x);
    void SetY(const float y);

    Vec2& operator +=(const Vec2& v);
    Vec2& operator -=(const Vec2& v);
    Vec2& operator *=(float s);
    Vec2& operator /=(float s);

    friend std::ostream& operator<<(std::ostream& os, const Vec2& other);
    friend std::istream& operator>>(std::istream& is, Vec2& other);

};

std::ostream& operator<<(std::ostream& os, const Vec2& other);
std::istream& operator>>(std::istream& is, Vec2& other);



#endif // VEC2_HPP