#include<iostream>
using namespace std;
int RemoveDuplicates(int arr[],int a)
{
    if (a==0||a==1)
    return a;
    int q=0;    
    for(int p=0;p<a-1;p++)
    if(arr[p]!=arr[p+1])
    arr[q++]=arr[p] ;
    arr[q++]=arr[a-1];
    return q;


}
int main()
{
    int arr[]={2,3,3,4,4,5,5,5,};
    int a=sizeof(arr)/sizeof(arr[0]);
    a=RemoveDuplicates(arr,a);
    cout<<a;
}