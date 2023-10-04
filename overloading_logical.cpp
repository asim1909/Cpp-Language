/*
    Overloading of logical operator
    Logical && - it return 1 if both inputs are 1 otherwise 0
*/

#include <iostream>
using namespace std;

class logical {
    int a;
    public:
        logical(int x){
            a=x;
        }
        bool operator && (logical ob) {
            return (a && ob.a);
        }
        friend bool operator || (logical ob1, logical ob2);
};

bool operator || (logical ob1, logical ob2) {
    return (ob1.a || ob2.a);
}

int main() {
    logical l1(1), l2(0);
    int x;
    x=l1&&l2;
    cout <<"Output of logical && is "<< x;
    x=l1||l2;
    cout <<"Output of logical || is "<< x;
}