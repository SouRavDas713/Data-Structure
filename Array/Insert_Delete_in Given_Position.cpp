#include<bits/stdc++.h>
using namespace std;


void array_insert(int arr[] , int pos , int val , int n)
{
    for(int i = n ; i>=pos-1 ; i--)
    {
        arr[i+1] = arr[i] ;  
    }
    arr[pos-1]=val ; 
     
}

void array_delete(int arr[] , int pos , int n)
{
    for(int i=pos-1 ; i<n-1 ; i++)
    {
        arr[i] = arr[i+1]  ; 
    }
     
}

int main()
{
    cout<<"array size ?" <<endl ;
    int n ; 
    cin>>n ; 
    int array[n+1];
    cout<<"Array input : " <<endl ;
    for(int i=0;i<n;i++)
    {
        cin>>array[i] ; 
    } 

    int array2[n] ; 
    copy(array,array+n, array2) ; 

    cout<<"insert postion ? insert value ? "<<endl ;  ; 
    int insert_pos ; 
    cin>>insert_pos ;
    int insert_val ; 
    cin>>insert_val ; 

    cout<<"delete pos ? "<<endl ; ;  
    int delete_pos ; 
    cin>>delete_pos ; 

    array_insert(array , insert_pos , insert_val , n) ; 

    array_delete(array2 , delete_pos , n) ; 

    cout<<"Ater Insert : "<<endl ;
    for(int i=0;i<n+1 ;i++)
    {
        cout<<array[i]<<" " ; 
    }
    cout<<endl ;
    cout<<"after delete "<<endl ;
    for(int i=0;i<n-1 ;i++)
    {
        cout<<array2[i]<<" " ; 
    }
    cout<<endl ;
}