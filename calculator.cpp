/*
create a class calculator which will take 2 data members a and b and. 5 member functions
get(),add(), subs(), mul(), div() to perform the operations.
*/ 

#include<iostream>
using namespace std;

class calculator
{
    private:
        int a,b;
    public:
        void get();
        void add();
        void subs();
        void mul();
        void div();
};

void calculator::get()
{
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
}

void calculator::add()
{
    cout<<"Add of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

void calculator::subs()
{
    cout<<"Sub of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}

void calculator::mul()
{
    cout<<"Multi of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}

void calculator::div()
{
    cout<<"Div of "<<a<<" and "<<b<<" is "<<a/b<<endl;
}

int main()
{
    calculator c;
    c.get();
    c.add();
    c.subs();
    c.mul();
    c.div();
    return 0;
}
