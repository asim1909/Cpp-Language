// function with return but without arguments area of circle

#include <iostream>
using namespace std;

/*
float area(){
    float r;
    cout<<"Enter the value of r: \n";
    cin>>r;
    return 3.14*r*r;
}

int main(){
    cout<<"area of circle is: "<<area()<<endl;
    return 0;
}
*/

int area_of_rectangle(int l, int b){
    return l*b;
}
int main(){
    int l,b;
    cout<<"Enter the value of l: ";
    cin>>l;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Area of rectangle is: "<<area_of_rectangle(l,b)<<endl;
    return 0;
}