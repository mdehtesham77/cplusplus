// Write a program to print the position of the smallest number of n numbers using arrays.
 #include<iostream>
 using namespace std;\

 smallest_num(int arr[],int n)
 {
    int small=arr[0];
    for(int i=1; i<n;i++)
    {
        if(arr[i]<arr[0])
        {
            small = arr[i];
        }
    } 
    
     return small;
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
     cout<<"The smallest no. are : "<<smallest_num(arr,n)<<endl;
     return 0;
 }