#include "mat2.hpp"
#include <iostream>


Mat2::Mat2()
{
    matrix[0][0] = e_00;
    matrix[0][1] = e_01;
    matrix[1][0] = e_10;
    matrix[1][1] = e_11;
}

Mat2::Mat2(float a, float b, float c, float d)
{
    matrix[0][0] = a;
    matrix[0][1] = b;
    matrix[1][0] = c;
    matrix[1][1] = d;
}

float Mat2::GetM_00() const
{
    float m_00 = matrix[0][0];
    return m_00;
}
float Mat2::GetM_01() const
{
    float m_01 = matrix[0][1];
    return m_01;
}
float Mat2::GetM_10() const
{
    float m_10 = matrix[1][0];
    return m_10;
}
float Mat2::GetM_11() const
{
    float m_11 = matrix[1][1];
    return m_11;
}

Mat2 &Mat2::operator*=(const Mat2 &m)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            
        }
    }
}

int main()
{
    Mat2();

    std::cout << matrix[0][0] << " yeet!\n";


}
