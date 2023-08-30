// write a program to swap 2 integers by using call by address

#include<iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    int a=12, b=34;
    cout<<"Before swap a and b are "<<a<<" "<<b;
    swap(&a,&b);
    cout<<"\nAfter swap a and b are "<<a<<" "<<b;
}