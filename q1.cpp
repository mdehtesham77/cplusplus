#include<iostream>

using namespace std;

int main()

{
    int k,n,i ;
    cout<<"Enter no. you want to rotate";
    cin>>k;
    cout<< "Enter no. of elements";
    cin>> n;

    int arr[n];
    for(i=0;i<n;i++) cin>> arr[i];
     for(i=k; i<n ; i++)
     cout<< arr[i]<< " ";
     for(i=0; i<k;i++)
     cout<< arr[i]<<" "; 
    return 0;
}