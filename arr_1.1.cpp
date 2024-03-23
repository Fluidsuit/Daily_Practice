
#include<iostream>
using namespace std;
int main() 
{
  int arr [] = {2,5,1,3,0};
  int n = 5;
  int largest = arr[0];
  for (int i = 0; i < n; i++) 
    {
      if (largest < arr[i]) 
      {
      largest = arr[i];
      }
    }
  cout<<largest;
}

