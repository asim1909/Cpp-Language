/*
    this pointer
    this pointer is hidden argument passed to non static member function of a class to access its local variables. its always point to current object
    of class
    this pointer is used when local variables name is same as that of data members
*/

#include <iostream>
using namespace std;

class rectangle {
    int l,b;
    public:
    void set_dimensions(int l, int b) {

        this ->l=l;
        this ->b=b;
    }
    int area() {
        return (l*b);
    }
};

int main() {
    rectangle r;
    r.set_dimensions(12,34);
    cout<<"Area of circle is "<< r.area();
}