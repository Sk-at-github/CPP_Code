//#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool linsearch(int arr[3][3],int target){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]==target){
            cout<<"The target element is found at index i "<<i<<"and j"<<j<<endl;
return 1;
        }
    }
    return 0;
}
}
void sumrowwise(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum =0;
    for(int j=0;j<col;j++)
    {
        sum = sum + arr[i][j];
        
    }
    cout<<"The sum of row "<<i+1<<" sum "<<sum<<endl;
   // cout<<endl;
}
}

int largestsumrowwise(int arr[][3],int row,int col){
    int maxrow = INT_MIN;
    int row1 =0;
    for(int i=0;i<row;i++){
        int sum = 0 ;
    for(int j=0;j<col;j++)
    {
        sum = sum + arr[i][j];
        
    }
    if(maxrow<sum){
        maxrow = sum;
        row1 = i;
    }
    }
    cout<<" The max row is "<<row1 + 1<<endl;
return maxrow;
}

int main()
{
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//int arr[3][3]={1,2,3,4,5,6,7,8,9};
//int arr[3][3];
cout<<"Enter the 2d array which you want to create "<<endl;
//Taking input row wise
/*
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
 

 */

/*
//Taking input column wise
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
    {
        cin>>arr[j][i];
    }
}
*/
//Print the array

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}




linsearch(arr,3);

sumrowwise(arr,3,3);
// cout<<"The largest sum row wise is "<<largestsumrowwise(arr,3,3)<<endl;


cout<<"The largest row sum is " <<largestsumrowwise(arr,3,3);
return 0;
}




