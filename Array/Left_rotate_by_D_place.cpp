#include<bits/stdc++.h>
using namespace std;

int main() 
{
    cout<<"The D and size ? "<<endl ;
    int d ; 
    cin>>d ; 
    int n ; 
    cin>>n ; 
    int arr[n] ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i] ; 
    }

    int temp[d] ; 
    for(int i=0;i<d;i++)
    {
        temp[i] = arr[i] ; 
    }

    for(int i=d;i<n;i++)  //shifting 
    {
        arr[i-d] = arr[i] ; 
    }

    for(int i=n-d ; i<n;i++)
    {
        arr[i] = temp[i-(n-d)] ; //Memorise
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" " ; 
    }
}