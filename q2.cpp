#include<iostream>
using namespace std;

 int search( int arr[], int n, int key )
 {
     int start=0;
     int end =n; 
     while(start<=end)
     {
         int mid = start + end/2;
         if(arr[mid]==key)
         {
             return mid;
         }
         else if(key < arr[mid])
         {
             end= mid-1;
         }
         else{
             start= mid+1;
         }
         return arr[start]; 

     }
     return 0;
 }
int main()
{
    int n;
    cout<<" Enter the number of element";
    cin>>n;

    int arr[n];
    cout<<"Enter the number";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the Key";
    cin>>key;

    cout<<"the Element is "<<search( arr, n,key)<<endl;

    return 0;

}