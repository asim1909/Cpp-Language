// create a class for calculating area of circle by taking pointer to data member radius and pointer to member function area()

#include <iostream>
using namespace std;

class circle {
    public:
    float r;
    float area() {
        return (3.14*r*r);
    }
};

int main() {
    circle c;
    float circle :: *p1;
    p1=&circle::r;
    float (circle::*p2)() = &circle::area;
    c.*p1=5.5;
    cout<<"Area of circle is " <<(c.*p2)();
}