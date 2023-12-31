// inline Function

#include <iostream>
using namespace std;

inline int Max(int x, int y)
{
    return (x > y) ? x : y;   // if x > y, return x, else return y
}   

int main()
{
    cout << "Max (20, 10): " << Max(20, 10) << endl;
    cout << "Max (0, 200): " << Max(78, 67) << endl;
    cout << "Max (100, 1010): " << Max(100, 110) << endl;
    return 0;
}
