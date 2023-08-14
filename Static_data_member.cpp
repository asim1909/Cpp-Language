// Syntax:  static data_type data_member_name;


#include<iostream>
using namespace std;

class employee {
    static int emp_id;
    static int count;
    string name;
    float salary;
    public:
        void get(){
            cout<<"Enter the name and salary\n";
            cin>>name>>salary;
            count++;
            emp_id++;
        }
        void show(){
            cout<<name<<" "<<salary<<endl;
        }
        static int count_emp(){
            return count;
        }
        
};

int employee :: count=0;
int employee :: emp_id=101;
int main()
{
    employee e[5];
    int i;
    for (i=0; i<4;i++)
    {
        e[i].get();
        e[i].show();
    };
    cout<<"\n Number of employee joined"<<employee::count_emp();
}