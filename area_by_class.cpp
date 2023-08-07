// area of rectangle using class

#include<iostream>  
using namespace std;

class rectangle{
    private:
        int l,b;
    public:
        void get()
        {
            cout<<"enter the 1 and b\n";
            cin>>l>>b;
        }
        void area()
        {
            cout<<"area is "<<l*b;
        }
};
int main()
{
    rectangle r1,r2;
    r1.get();
    r1.area();
    r2.get();
    r2.area();
    return 0;
}
