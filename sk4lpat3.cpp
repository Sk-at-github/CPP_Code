#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number.";
    int n;
    cin>>n;
    int i = 1;
    int p =1;
    while(i<=n){
    int j=1;
        while(j<=n){
        cout<<p;
        p=p+1;
        j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}