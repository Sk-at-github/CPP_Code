#include <bits/stdc++.h>
using namespace std;

void SwapAlt(int arr[], int m)
{

    for (int i = 0; i < m; i++)
    {
    if(!((i+1)>=m)){
        swap(arr[i], arr[i + 1]);
        i++;
    }

    }
    
        

    for (int j = 0; j < m; j++)
    {
        cout << arr[j] << " ";
    }

   // return 0;
}

int main()
{
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5,6};

    SwapAlt(arr, n);
}