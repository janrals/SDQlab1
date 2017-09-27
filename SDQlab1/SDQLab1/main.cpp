#include <iostream>
//Name : Sean Clancy
//Student ID : B00069909
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

class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main(void)
{
    int recWidth = 0, recHeight = 0, cirRadius;

    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);

    Rectangle Rec;

    Circle Cir;

    cout << "Please enter the width and height of the rectangle: ";

    cin >> recWidth >> recHeight;

    Rec.setWidth(recWidth);
    Rec.setHeight(recHeight);

    // Print the area of the object.


    cout << "\n\nInput radius of a circle: ";

    cin >> cirRadius;
    Cir.setWidth(cirRadius);

    cout << "\n\nTotal Circle area: " << Cir.getArea() << endl;
    cout << "\n\nTotal Triangle Area " << Tri.getArea() << endl;
    cout << "\nTotal Rectangle Area " << Rec.getArea() << endl;

    cout << "\nTotal area is: " << (Cir.getArea() + Tri.getArea() + Rec.getArea()) << endl;

    return 0;
}
