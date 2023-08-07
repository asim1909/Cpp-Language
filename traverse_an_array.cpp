//title: Traversing an array

/*
#include <bits/stdc++.h>
using namespace std;

void printArray(int* array, int n)
{
	int i;

	cout << "Array's: ";
	for (i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
int main()
{
	int array[] = {1, 2, 3, 4, 5};
	int n = sizeof(array) / sizeof(array[0]);

	printArray(array, n);
	return 0;
}
*/

#include<stdio.h>
int main()
{
    int i,arr[5]={1,2,3,4,5};     //array declaration and initialization
    for(i=0;i<5;i++)             //traverse the array
    {
        printf("%d ",arr[i]);
    }
}