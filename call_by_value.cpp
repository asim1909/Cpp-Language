/*
    call by value
    call by address
    call by reference
*/

// call by value
// in call by value method we pass the value of variables.
// any changes made to the formal arguments will not change the actual arguments

#include <iostream>
using namespace std;

/*
void increase(int n) {
    n=n+1
}

int main() {
    int x=12;
    cout<<"Before function call n is "<<n;
    increase(n); // actual
    cout<<"\nAfter function call n is "<<n;
}
*/

/*
    in call by address we pass the address of the variable that will be caught 
    by pointers
    any changes mode to formal arguments will change the actual arguments

void increase(int n) {
    n=n+1
}

int main() {
    int x=12;
    cout<<"Before function call n is "<<n;
    increase(&n); // actual
    cout<<"\nAfter function call n is "<<n;
}
*/

/*
    in call by references we pass the address of the variable that will be caught 
    by references
    any changes mode to formal arguments will change the actual arguments
*/

void increase(int &n) {
    n=n+1
}

int main() {
    int x=12;
    cout<<"Before function call n is "<<n;
    increase(n); // actual
    cout<<"\nAfter function call n is "<<n;
}