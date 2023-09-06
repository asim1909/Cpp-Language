// Program to calculate area of triangle by initializing the base and height using parameterized constructor and calculate the area by taking a friend function

#include <iostream>
using namespace std;

class triangle {
    private:
        int base, height;
    public:
        triangle(int b, int h) {
            base = b;
            height = h;
        }
        friend float area(triangle t);
};

float area(triangle t) {
    return 0.5 * t.base * t.height;
}

int main() {
    triangle t(10, 20);
    cout<<"Area of triangle is: "<<area(t)<<endl;
    return 0;
}