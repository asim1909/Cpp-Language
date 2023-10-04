/*
    overloading of relational operators
        to overload > (greater than operator)

#include <iostream>

using namespace std;

class abc {
    int a, b;
    public: 
        abc(int x, int y) {
            a=x;
            b=y;
        }
        bool operator > (abc ob) {
            if(a>ob.a && b>ob.b)
                return 1;
            else   
                return 0;
        }
};

int main() {
    abc ob1(12,34), ob2(4,61);
    if(ob1>ob2)             // ob1.operator>(ob2)
        cout << "Two objects are equal\n";
    else
        cout << "ob1 is not greater then ob2";
}
*/

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