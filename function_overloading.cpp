// Function Overloading

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

float add(float a, float b) {
    return a+b;
}

int add(int a, int b, int c) {
    return a+b+c;
}

float add(float a, float b, float c) {
    return a+b+c;
}

int main() {
    cout << add(1, 2) << endl;
    cout << add(1.1f, 2.2f) << endl;
    cout << add(1, 2, 3) << endl;
    cout << add(1.1f, 2.2f, 3.3f) << endl;
    return 0;
}
