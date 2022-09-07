//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int revSize(int arr[], int n)
{
   int i = 0;
   int start = 0, last = n - 1;
   for (i = 0; i < n; i++)
   {
      if (start <= last)
      {
         swap(arr[i], arr[n-1]);
         start++, last--;
      }

   }
      for (int j = 0; j < n; j++)
      {
         cout << arr[j] << " ";
      }
} 

int main()
{  
   cout << "Enter the size of array" << endl;
   int n;
   cin >> n;
   int a[n];
   cout << "Enter the array of element ." << endl;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }

   // int b[n] =
   revSize(a, n); 
   return 0;
}
