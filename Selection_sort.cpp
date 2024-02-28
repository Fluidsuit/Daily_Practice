// Selection sort:-
// Timr complexity is O(n^2)

#include<iostream>
using namespace std;

void selection_sort(int n,int arr[])
{
    for(int i=0;i<=n-1;i++) // It can be n-2, bcs last element is not necessary to swap........
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j] < arr[mini])
            {
                mini=j;
            }
        }

        int temp;
        temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}


int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    selection_sort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//output:-

// 6
// 13
// 46
// 24
// 52
// 20
// 9

// 9 13 20 24 46 52