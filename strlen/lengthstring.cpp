#include<iostream>
using namespace std;
int main()
{
    char x[20];
    int i,len=0;
    cout<<"Enter the character: "<<endl;
    cin>>x;
    for(i=0;x[i]!='\0';i++)
    len++;
    cout<<"Length of "<<x<<"is: "<<len;
}