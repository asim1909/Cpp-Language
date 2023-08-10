// Use inline function to create calculator program.

#include <iostream>
using namespace std;

inline int Add(int x, int y)
{
    return x + y;
}

inline int Subtract(int x, int y)
{
    return x - y;
}

inline int Multiply(int x, int y)
{
    return x * y;
}

inline int Divide(int x, int y)
{
    return x / y;
}

int main()
{
    int x, y;
    cout << "Enter two no.: ";
    cin >> x >> y;
    cout << "Add: " << Add(x, y) << endl;
    cout << "Sub: " << Subtract(x, y) << endl;
    cout << "Mult: " << Multiply(x, y) << endl;
    cout << "Div: " << Divide(x, y) << endl;
    return 0;
}
