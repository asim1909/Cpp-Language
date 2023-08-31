/*
    Pointer to arrays
    we can use pointers to access the elements of array
*/

#include <iostream>
using namespace std;

int main() {
    int a[] = {12,34,56,7,8},*p,i;
    p=a;
    /*
    for(i=0;i<=4;i++){
        cout<<*(p+i)<<" ";
    } */
   for(i=0;i<=4;i++) {
    cout<<*p;
    p++;
   }
}