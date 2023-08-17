// to calculate area of rectangle, circle and triangle using function overloading?

#include<iostream>
using namespace std;

int area_rectangle(int l, int b)
{
    return l*b;
}

float area_circle(float r)
{
    return 3.14*r*r;
}

float area_triangle(float b, float h)
{
    return 0.5*b*h;
}

int main()
{
    int l, b;
    float r, h;
    cout << "Enter the l and b of the rectangle: ";
    cin >> l >> b;
    cout << "Enter the r of the circle: ";
    cin >> r;
    cout << "Enter the b and h of the triangle: ";
    cin >> b >> h;
    cout << "area of the rectangle is: " << area_rectangle(l, b) << endl;
    cout << "area of the circle is: " << area_circle(r) << endl;
    cout << "area of the triangle is: " << area_triangle(b, h) << endl;
    return 0;
}