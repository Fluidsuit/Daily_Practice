#include<iostream>
using namespace std;
void print2(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print1(int n)

{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "* ";
        }
        
        cout<<endl;
    }
}
void print3(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void print4(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void print5(int n)
{
   int i,j;
    
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void print7(int n)

{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n - (2*i+1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8(int n)
{
    for ( int i = 1; i <=2*n-1; i++)
    {
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        
        }
        cout<<endl;
    }
}

int main()
{   
    int n;
    cin>>n;
    print6(n);
    print7(n);
    
}

// o/p:

// 5
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *