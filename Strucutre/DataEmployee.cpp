#include<iostream>
using namespace std;
struct DataEmployee
{
    char name[100];
    int age;
    float salary;
};
int main(){
    DataEmployee e;
    cout<<"Enter name of the employee: ";
    cin.getline(e.name,100);
    cout<<"Enter age of the employee: ";
    cin>>e.age;
    cout<<"Enter salary of the employee: ";
    cin>>e.salary;
    //printing details
    cout<<"\n ****Employee Details***"<<endl;
    cout<<"Name: "<<e.name<<endl<<"Age: "<<e.age<<endl<<"Salary: "<<e.salary<<endl;
    return 0;
}
