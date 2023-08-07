/* 
    create a class employee with emp_id, name and salary as data members.
    void get() and void show() as member functions.
    show function need to print those employee whose salary is > 80000.
    make this program for 5 members.
*/

#include<iostream>
using namespace std;

class employee
{
    private:
        int emp_id;
        string name;
        float salary;
    public:
        void get();
        void show();
};

void employee::get()
{
    cout<<"Enter the employee id: ";
    cin>>emp_id;
    cout<<"Enter the name of employee: ";
    cin>>name;
    cout<<"Enter the salary of employee: ";
    cin>>salary;
    cout<<endl; 
}

void employee::show()
{
    if(salary>80000)
    {
        cout<<"showing the details of employee whose salary is > 80000"<<endl;
        cout<<"Employee id: "<<emp_id<<endl;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee salary: "<<salary<<endl;
    }
}

int main()
{
    employee e[5];
    for(int i=0;i<5;i++)
    {
        e[i].get();
    }
    for(int i=0;i<5;i++)
    {
        e[i].show();
    }
    return 0;
}

