#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int i = 1;

    while(i<=n){
        char ch ='A';
        int j=1;
        while(j<=n){
            cout<<ch;
        ch = ch + 1;
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
    }


}