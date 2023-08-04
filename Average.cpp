#include<iostream>
using namespace std;
int main ()
{
    string name;
    float sub1,sub2,sub3,sub4,sub5,total_marks,avg;
    cout<<"Enter name of student: ";
    cin>>name;
    cout<<"Enter marks of 5 subjects out of 100: ";
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    total_marks = sub1+sub2+sub3+sub4+sub5;
    avg = total_marks/5;
    cout<<"Name: "<<name<<endl;
    cout<<"Average: "<<avg<<endl;
    return 0;
}
