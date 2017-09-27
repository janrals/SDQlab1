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
    int recWidth = 0, recHeight = 0;

    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);

    Rectangle Rec;

    cout << "Please enter the width and height of the rectangle: ";

    cin >> recWidth >> recHeight;

    Rec.setWidth(recWidth);
    Rec.setHeight(recHeight);

    // Print the area of the object.

    cout << "\n\nTotal Triangle Area " << Tri.getArea() << endl;

    cout << "\nTotal Rectangle Area " << Rec.getArea() << endl;

    return 0;
}
