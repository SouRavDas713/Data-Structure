#include<bits/stdc++.h>
using namespace std;

// Try Set Approch 


int remove(int arr[] , int n)
{
    int i = 0 ; 
    for(int j=1 ; j<n;j++)
    {
        if(arr[j]!=arr[j-1])
        {
            arr[i+1]=arr[j] ; 
            i++ ; 
        }
    }
    return i+1 ; 
}

int main()
{
    cout<<"Size ? "<<endl ;
    int  n ; cin>>n ; 
    int arr[n] ; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i] ; 
    }
    int size = remove(arr , n) ; 
    cout<<size<<endl ;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" " ; 
    }
    cout<<endl ;
    return 0 ; 
}