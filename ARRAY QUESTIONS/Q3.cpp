// find the target element in an infine array
// not complete

#include<iostream>
using namespace std;

int binarysearch(int arr[], int target, int start, int end)
{
     while(start<=end)
    {
        int mid = start +  end/2;
    if(target==arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            end = mid -1;
        }
        else{
            start= mid+1;
        }
    }
    return -1;

}

int ans( int arr[], int target)
{
    int start=0;
    int end =1;
    while(target > arr[end])
    {
        int temp = end+1;
        end= end +(end-start+1)*2;
        start=temp;
    }
 
return binarysearch(arr ,target ,start ,end);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int target=3;
    cout<< ans(arr,target);
    
    return 0;
}