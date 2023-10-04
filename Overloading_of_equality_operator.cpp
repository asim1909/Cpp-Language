/*Overloading of equality operator == by using friend function */

#include <iostream>
using namespace std;

class equality {
    int a,b;
    public:
        equality(int x, int y) {
            a=x;
            b=y;
        }
        friend bool operator == (equality e1, equality e2);
};

bool operator == (equality e1, equality e2) {
    if (e1.a == e2.a && e1.b == e2.b)
        return 1;
    else
        return 0;
}

int main() {
    equality e1(12,12), e2(12,12);
    if (e1==e2)
        cout << "e1 is e2 are equal\n";
    else
        cout <<"e1 is not equal to e2";
}