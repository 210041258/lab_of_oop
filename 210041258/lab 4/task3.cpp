#include<iostream>
#include<math.h>
using namespace std;

// OOP class
class Rectangle
{
private :
// private data
    float length;
    float width;

public :
    Rectangle(float l=1.0,float w=1.0)
    {
        length = l;
        width= w ;
    }
// public functions that can access to your private sesstion inside the app of class

    float calculatePerimeter()
    {
        float perimeter = 2 * (width + length);
        return perimeter;
    }
    float calculateArea()
    {
        float area = (width * length) ;
        return area ;
    }
    float calculateDiagonal()
    {
        float diagonal = sqrt(length*2+width*2);
        return diagonal;
    }
    float calculateAngleWithLength()
    {
        float angle ;
        angle  = tanh((length)/(width));
        return angle;
    }
    void setDimensions(float newLength=0.0,float newWidth)
    {
        length = newLength;
        width = newWidth;
    }
    void getDimensions()
    {
        cout << " the current length : " << length << endl;
        cout << " the current Width : " << width << endl;
    }
};


void start_program()
{
// start your program here
    Rectangle r2(5.0,10.0);
    cout << "the calculate of Perimeter of Rectangle 2 " << r2.calculatePerimeter() << endl;
    cout << "the calculate of Area of Rectangle 2 " << r2.calculateArea() << endl;
    cout << "the calculate of Diagonal of Rectangle 2 " << r2.calculateDiagonal() << endl;
    cout << "the calculate of Angle With Length of Rectangle 2 " << r2.calculateAngleWithLength() << endl;
    r2.setDimensions(10.0,5.0);
    r2.getDimensions();
}



int main()
{
    start_program();
    return 0;
}
