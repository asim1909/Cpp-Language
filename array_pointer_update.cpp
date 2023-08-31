#include <iostream>
using namespace std;

void show(int *p,int n) {
    int i;
    for (i=0;i<=n;i++) {
        cout<<*p<<" ";
        p++;
    }
}

int main() {
    int a[] = {12,34,56,78,9};
    int n = sizeof(a)/sizeof(a[0]);
    show(a,n);
}