// Object oriented Programming PT-3
#include <iostream>
using namespace std;
class Coordinate
{
public:
    float a;
    float b;

public:
    Coordinate operator+(Coordinate const &obj)
    {
        Coordinate z;
        z.a = this->a + obj.a;
        z.b = this->b + obj.b;
        return z;
    }

    void sqdistancefromcoordinate(float a)
    {
        float dist;
        dist = (this->a - a) * (this->a - a) + (this->b - a) * (this->b - a);
        cout << dist;
    }

    void sqdistancefromcoordinate(float a, float b)
    {
        float dist;
        dist = (this->a - a) * (this->a - a) + (this->b - b) * (this->b - b);
        cout << dist;
    }

    void sqdistancefromcoordinate(float a, float b, float c)
    {
        float dist;
        dist = (this->a - a) * (this->a - a) + (this->b - b) * (this->b - b);
        cout << dist;
        cout << "the third function is used ";
    }
};

int main()
{
    Coordinate x;
    x.a = 3;
    x.b = 4;

    Coordinate y;
    y.a = 5;
    y.b = 6;

    Coordinate z;
    z = x + y;
    
    cout << "the coordinate after addition are " << z.a << " " << z.b;
    return 0;
}
