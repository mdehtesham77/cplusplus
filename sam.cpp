#include<iostream>
using namespace std;

temparr(int n , int d)
{
    int temp_arr[d];
    for(int i=0; i<d ; i++) cin>>temp_arr[i];
    for(int i=0; i<d; i++)
    {
        cout<<temp_arr[i] << " ";
    }
    return 0;
}

inputarr(int n, int d, int a[])
{
    for(int i =d; i<n ; i++) cin>> a[i];

    for(int i=d; i<n ; i++)
    cout<< a[i] << " ";
    return 0;
}

int main()
{
    int n , d ;
    cout<< " Enter  no. you want to rotate : ";
    cin>>d;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter Numbers: ";
    inputarr(n,d,a);
    temparr(n,d);
    return 0;
}