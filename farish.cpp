#include<iostream>
#include<cmath>
using namespace std;
void rotate(int arr[], int n)
{
    int x= arr[n-1];
    for(int i = n-1 ; i>0 ; i--)
    arr[i]=arr[i-1];
    arr[0]=x;
}

int main()
{
    int arr[]={1,2,3,4,5},n=5;
    cout<<" given array is \n ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

     rotate( arr , n);

     cout<<" \nrotated array is\n";
     for(int i =0 ; i<n; i++)
     cout<<arr[i]<<" ";
     return 0;
    
}
