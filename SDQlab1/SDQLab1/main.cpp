#include <iostream>

using namespace std;

// Base class
class Shape
{
public:
    // pure virtual function providing interface framework.

    virtual int getArea() = 0;

    void setWidth(int w)
{
    width = w;
}

void setHeight(int h)
{
        height = h;
}
    protected:
    int width;
    int height;

};

class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};

class Circle: public Shape
{
public:

    int getArea()
    {
        return (3.14 * width * width);
    }
};

int main(void)
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);

    // Print the area of the object.

    cout << "input radius of a circle" << endl;

    cin >> input;
    Cir.setWidth(input);

    cout << "Total Circle area: " << Cir.getArea() << endl;

    cout << "Total Triangle Area " << Tri.getArea() << endl;

    return 0;
}
