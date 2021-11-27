#include<iostream>

using namespace std;
 int linear_search(int arr[], int n, int key )
 {
     for( int i=0;i<n ;i++)
     {
        if(arr[i]==key)
             {
                 return i;
             }
     }
 return -1;
 }

int main()
{
    int n;
    cout<<"Enter Number of elements"<<endl;
    cin>> n;

    int arr[n];
    cout<<"Enter the Numbers"<<endl;
    for(int i=0;i<n;i++)
    cin>> arr[i];

    int key;
    cout<<"Enter the number you want to search "<<endl;
    cin>> key;
    cout<< "The index of the elemnt ="<<linear_search(arr,n,key)<<endl;
    return 0;

}