#include<iostream>
using namespace std;

int main(){
 cout<<"Enter the number"<<endl;
 int n;
 cin>>n;
 int i =1;



 while(i<=n){
    int j = 1;
    while(j<=i){
     // int j = 1;
 char ch = 'A' + n -i + j - 1;
     cout<<ch;
     //ch = ch + 1;
     j=j+1;


    }
    cout<<endl;
    i=i+1;

 }
 return 0;

}