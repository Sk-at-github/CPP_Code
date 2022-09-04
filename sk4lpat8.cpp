#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int i = 1 ;

    // Space star pattern
  //  int space = space - i;

    while(i<=n){
        int space = 1;
        while (space<= n-i)
        {
            cout<<" ";
            space = space + 1;
        }
        int j = 1;
        while(j<=i){
            cout<<"*";
            j=j+1;

        }
        cout<<endl;
        i = i+1;
    }
return 0;
}