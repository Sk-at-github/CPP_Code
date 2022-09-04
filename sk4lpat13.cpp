#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space = 1;
        while(space<=n-i){
            cout<<" ";
            space = space + 1;
        }
        //int p =1;
        int m=1;
        while(m<=i){
            cout<<m;
            m=m+1; 
       
        }
        int j=1;
       // int k=0;
        while(j<i){
            cout<<i-j;
           // k=k+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}