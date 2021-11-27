// Write a program to print the position of the largest number from n numbers of  arrays.
#include<iostream>
 using namespace std;

 largest_num(int arr[],int n)
 {
    int large=arr[0];
    for(int i=1; i<n;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    } 
    // for second largest number
    // int second_large =arr[1];
    // for(int i=0;i<n;i++)
    // {
    //     if(large != arr[i])
    //     {
    //         if(arr[i]>second_large)
    //         {
    //             second_large=arr[i];
    //         }
    //     }
    // }
    
    //  return second_large;
    return large;
 }


 int main()
 {
     int n;
     cout<<"enter the no. of elments"<<endl;
     cin>>n;
     int arr[n];
     cout<<" enter the elemnts"<<endl;
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     cout<<"The largest no. are : "<<largest_num(arr,n)<<endl;
     return 0;
 }