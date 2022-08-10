#include <iostream>
#include <stdio.h>
#include <chrono>
#include <sys/time.h>
#include <ctime>

using std::cout; using std::endl;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;
using namespace std;

/*defining input array*/
#define ARR_SIZE 10
int my_arr[ARR_SIZE];

/*
author: akash p
simple array swap function
*/
void my_swap(int *arr, int idx, int idxp)
{
    int temp = arr[idxp]; //save old value before overwriting
    arr[idxp] = arr[idx]; //copy idx to idxp
    arr[idx] = temp; //copy old value in idxp to idx
}

void print_arr_elements(int *arr, int num_elements)
{
    for (int idx=0; idx<num_elements; idx++)
        cout<<arr[idx]<<" ";  
    cout<<'\n';
}

int main ()
{
    //my index variable
    int idx=0;
    for(int i=0;i<ARR_SIZE;i++)
        my_arr[i]=rand()%100;  //Generate number between 0 to 99

    int num_elements = sizeof(my_arr)/sizeof(int);

    cout << sizeof(my_arr)<<endl;
    cout << num_elements<<endl<<'\n';
    
    //print_arr_elements(my_arr, num_elements);

    int interation_count = 0;
    auto start = std::chrono::high_resolution_clock::now();
    for(int iteridx=0; iteridx < num_elements; iteridx++)
    {
        for (idx=0; idx < num_elements-interation_count-1; idx++)
        {
            if (my_arr[idx] < my_arr[idx+1])
                my_swap(my_arr, idx, idx+1);
        }
        interation_count++;
        print_arr_elements(my_arr, num_elements);
    }
    auto elapsed = std::chrono::high_resolution_clock::now() - start;

    long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        elapsed).count();
    cout << microseconds;
}