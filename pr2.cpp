#include<iostream>
#include<conio.h>
using  namespace std;
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

int main()
{
    int n;
    cout<<"welcome";
    cin>>n;
    print2(n);
}





// output
//
// *
// **
// ***
// ****
// *****