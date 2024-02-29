//Bubble sort
// Time Complexcity :-  O(n^2)
#include<iostream>
using namespace std;
 
void Bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-i;j++) // it also can be j<=i as last element should not to compare in bubble sort
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Bubble_sort(arr,n);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


// output:-

// 6

// 13
// 46
// 24
// 52 
// 9
// 20
// 9 13 20 24 46 52
