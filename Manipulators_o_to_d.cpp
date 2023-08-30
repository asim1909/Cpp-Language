// find the octal to decimal equivalent of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the octal number: ";
    cin >> n;
    int rem, dec = 0, i = 0;
    while (n != 0)
    {
        rem = n % 10;
        dec = dec + rem * pow(8, i);
        i++;
        n = n / 10;
    }
    cout << "The decimal equivalent of the number is: " << dec << endl;
    return 0;
}