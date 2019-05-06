// Mat2 definition
#include <array>
#include <vector>
struct Mat2 {
        // matrix layout :
        // e_00 e_01
        // e_10 e_11
        float e_00 = 1.0f;
        float e_10 = 0.0f;
        float e_01 = 0.0f;
        float e_11 = 1.0f;

        Mat2();
        Mat2(float a, float b, float c, float d);

        float GetM_00() const;
        float GetM_10() const;
        float GetM_01() const;
        float GetM_11() const;

        // TODO (in mat2 .cpp ) Definition v. operator *=
        Mat2& operator *=(Mat2 const & m);
    
};

// TODO (in mat2 .cpp ) Definition v. operator *
Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );