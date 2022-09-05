#include <bits/stdc++.h>
using namespace std;

int Arrsum(int arr[],int n){
    int sum = 0 ;
    for(int i =0;i<n;i++){
        sum = sum + arr[i];
    
}
    return sum;
}



int main(){
int n;
cin>>n;
int a[n];

for(int i =0;i<n;i++){
    cin>>a[i];
}

int sum = Arrsum(a,n);
cout<<sum;
}