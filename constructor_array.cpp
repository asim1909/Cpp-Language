/* 
    Program to find largest element in an array of 'n' elements by using a friend function
*/

#include <iostream>
using namespace std;

class largest {
    int *arr;
    public:
        largest(int n) {
            arr = new int[n];
            cout<<"Enter "<<n<<" elements: ";
            for(int i = 0; i < n; i++) {
                cin>>arr[i];
            }
        }
        friend int find_largest(largest ob, int n);
}

int find_largest(largest ob, int n) {
    int max = ob.arr[0];
    for(int i = 1; i < n; i++) {
        if(ob.arr[i] > max) {
            max = ob.arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    largest ob(n);
    cout<<"Largest element is: "<<find_largest(ob, n)<<endl;
    return 0;
}