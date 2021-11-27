#include<iostream>
using namespace std;

int search_arr( int n,int element, int arr[])
{
    int start=0 , end=n-1;
    while(start<=end)
    {
        int mid = start +  end-start/2;
        if(element==arr[mid]){
            return mid;
        }
        else if(element < arr[mid]){
            end = mid -1;
        }
        else{
            start= mid+1;
        }
    }
    return -1;
}
int main()
{
        int n , search;
        cout<<"Enter no. of elements \n";
        cin>> n;

        int arr[n] ;
        cout<< " enter the number\n";
        for(int i=0; i<n ; i++) cin>> arr[i];


        cout<<" \nEnter the number You want to search \n";
        cin>> search;

         cout<<" The index of the number is: "<<search_arr(n , search, arr)<<endl;
         return 0;
}