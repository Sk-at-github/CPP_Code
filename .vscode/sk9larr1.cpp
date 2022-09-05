#include <bits/stdc++.h>
using namespace std;

//#include<iostream>

//using namespace std;
int getMax(int arr[20],int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
  //  maxi =max(maxi,arr[size]);
  if(arr[i]>maxi){
    maxi = arr[i];
  }
    }
    return maxi;
}
int getMin(int arr[20],int size){
    int mini = INT_MAX ;
    for(int i=0;i<size;i++){
         if(arr[i]< mini){
    mini = arr[i];
  }
  //  mini = min(mini,arr[size]);
    }
    return mini;
}


int main(){

   cout<<"Size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elemnts of array"<<endl;


    int arr[20];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int maxi= getMax(arr,n);
    int mini =getMin(arr,n);

    cout<<"Maximum number in array is "<<maxi<<endl;
    cout<<"Minimum number in arraty is "<<mini<<endl;
    
    
    
}
