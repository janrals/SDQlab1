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

<<<<<<< HEAD
class Circle: public Shape
{
public:

    int getArea()
    {
        return (3.14 * width * width);
=======
class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (width * height);
>>>>>>> 3f3ee28749e5d4df9cf19adbd21594999f3f9721
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

<<<<<<< HEAD
    cout << "input radius of a circle" << endl;

    cin >> input;
    Cir.setWidth(input);

    cout << "Total Circle area: " << Cir.getArea() << endl;

    cout << "Total Triangle Area " << Tri.getArea() << endl;
=======
    cout << "\n\nTotal Triangle Area " << Tri.getArea() << endl;

    cout << "\nTotal Rectangle Area " << Rec.getArea() << endl;
>>>>>>> 3f3ee28749e5d4df9cf19adbd21594999f3f9721

    return 0;
}
