#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int i =2;
    while(i<n){
        if(n%i==0){
            cout<<"Number is not prime"<<endl;
            return 0;

        }
        i=i+1;
    }


   
       
    cout<<"Number is Prime."<<endl;
        return 0;


}