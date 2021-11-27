// Write a program to find the mean of n numbers using arrays.
#include<iostream>
using namespace std;


int main()
{
    int n, sum=0;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    int arr[n];
    cout<<"ENter the number"<<endl;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++)
    
     sum += arr[i];
        cout<< sum <<endl;
    float mean = (float)sum/n;
    cout<<mean;
      return 0;
}