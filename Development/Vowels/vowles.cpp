#include<iostream>
using namespace std;
int main()
{
    char string[100];
    int i,vow=0;
    cout<<"enter a string: "<<endl;
    cin>>string;
    for(int i=0;string[i];i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            vow++;
        }
    }
    cout<<"The number of vowels are: "<<vow;
}