// initialization of 2d array

#include <iostream>
using namespace std;

int main() {
	int a[3][3] = {},i,j; // {1,2,3,4,5,6,7,8,9},i,j; , {1,2,3,4,5,6,7},i,j; , {{1,2,3},{4,5,6},{7,8,9}},i,j;  {{1,2},{4,5,6},{7,8}},i,j;
	cout<<"2d array is: \n";
	for(i=0;i<=2;i++) {
		for(j=0;j<=2;j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}