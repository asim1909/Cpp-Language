// Function with return but arguments

#include <iostream>
using namespace std;

void simple_interest(float p, float r, float t){
    cout<<"The simple interest is: "<<(p*r*t)/100<<endl;
}

int main(){
    float p,r,t;
    cout<<"Enter the value of p: ";
    cin>>p;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<"Enter the value of t: ";
    cin>>t;
    simple_interest(p,r,t);
    return 0;
}