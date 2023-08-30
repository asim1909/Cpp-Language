// write a program to swap 2 integers by using call by reference

#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int c;
    c=x;
    x=y;
    y=c;
}
int main() {
    int a=12, b=34;
    cout<<"Before swap a and b are "<<a<<" "<<b;
    swap(a,b);
    cout<<"\nAfter swap a and b are "<<a<<" "<<b;
}