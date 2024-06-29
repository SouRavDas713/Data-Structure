#include<bits/stdc++.h>
using namespace std;


void fun(int arr[] , int n) 
{
    int first_largest = arr[0]; 
    int second_largest = INT_MIN ; //if all positive we can use -1  

    for(int i=1;i<n;i++)
    {
        if(arr[i]>first_largest)
        {
            second_largest = first_largest ; 
            first_largest = arr[i] ; 
            
        }
        //case : -2 -3 -4 -5
        else if(arr[i] > second_largest && arr[i] != first_largest) 
        {
            second_largest = arr[i];
        }
    }

    //Case - 3 3 3 3 3 3
    /* if (second_largest == INT_MIN) 
    {
        cout << "There is no second largest element." << endl;
    }  */

    cout<<"1st : "<<first_largest<<"  "<<"2nd : "<<second_largest<<endl ;
}

int main()
{
    int n ; 
    cin>>n ; 

    int array[n] ; 
    for(int i=0;i<n;i++)
    {
        cin>>array[i] ; 
    }

    fun(array , n) ; 
    return  0 ; 
}