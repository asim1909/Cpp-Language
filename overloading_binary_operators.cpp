/* Overloading binary operators.
        we can overload the possible binary operators. In this case the operator function will tale 1 argument which is the object of same class

#include <iostream>
using namespace std;

class calculate {
    int feet,inch;
    public: 
        calculate()  // default constructor
        {

        }
        calculate(int f, int i) {  // parameterized constructor
            feet = f;
            inch = i;
        }
        calculate operator+(calculate ob) {   // operator overloading
            calculate c;
            c.feet = feet + ob.feet;
            c.inch = inch + ob.inch;
            return c;
        } 
        void show() {   // member function
            cout<<feet<<" I"<<inch;
        }
};

int main() {
    calculate c1(12,3), c2(14,5), c3;
    c3 = c1 + c2; // c1.operator+(c2);
    c3.show();
}

#include <iostream>
using namespace std;

class calculate{
    int feet,inch;
    public:
        calculate(){

        }
        calculate(int f,int i){
            feet=f;
            inch=i;
        }

        friend calculate operator+(calculate c1,calculate c2);
        void show(){
            cout<<feet<<" "<<inch;
        }
};

calculate operator+(calculate c1,calculate c2){
    calculate c;
    c.feet=c1.feet+c2.feet;
    c.inch=c1.inch+c2.inch;
    return c;
}

int main(){
    calculate c1(12,3),c2(14,5),c3;
    c3=c1+c2;
    c3.show();
}


*/

// Program to overload '*' operator for multiplication of two complex numbers.

#include <iostream>
using namespace std;

class complex {
    int real, imag;
    public:
        complex() {

        }
        complex(int r, int i) {
            real = r;
            imag = i;
        }
        complex operator*(complex c) {
            complex temp;
            temp.real = real * c.real - imag * c.imag;
            temp.imag = real * c.imag + imag * c.real;
            return temp;
        }
        void show() {
            cout<<real<<" + "<<imag<<"i";
        }
};

int main() {
    complex c1(2,3), c2(4,5), c3;
    c3 = c1 * c2;
    c3.show();
}