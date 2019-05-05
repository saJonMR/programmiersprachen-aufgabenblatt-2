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
    ~Vec2();

    float GetX() const;
    float GetY() const;

    void SetX(const float x);
    void SetY(const float y);

};
#endif // VEC2_HPP