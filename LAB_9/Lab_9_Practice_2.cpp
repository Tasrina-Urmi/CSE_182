/*Practice-2: Write a C++ program to find the diameter, circumference, and area of a circle
using functions.*/


#include<iostream>
using namespace std;

#define PI 3.1416;


void diameter(int r)
{
    int diameter = 2 * r;
    cout<<"Diameter of the circle is: "<<diameter<<endl;
}

void circumference(int r)
{
    float c = 2 * r * PI;
    cout<<"Circumference of the circle is: "<< c << endl;
}

void area(int r)
{
    float a = 2 *   r *  r * PI;
    cout<<"Area of the circle is : " << a <<endl;
}


int main()
{
    int r;
    cout<<"Enter radius of the circle: ";
    cin>> r;
    diameter(r);
    circumference(r);
    area(r);

    return 0;
}

