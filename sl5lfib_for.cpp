#include<iostream>
using namespace std;

int main(){
    int a= 0,b=1;

    //Fib using for 0 1 1 2 3 5 8

cout<<"Enter the number"<<endl;
int n;
cin>>n;
int nextnumber;
cout<<a<<" "<<b<<" ";


for(int i =0;i<n;i++){

    nextnumber = a + b;
    cout<<nextnumber<<" ";
     a = b;
     b = nextnumber;
}
return 0;
     
    
}