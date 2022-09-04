#include<iostream>
using namespace std;

int fib(int m){
    int value;
    int a =0,b =1;

    for(int i = 2;i<=m;i++){

        value = a + b;
        a = b;
        b = value;

    }
    return b;
}

int main(){
    cout<<"Enter the nth number you want to find the value of that "<<endl;
    int p;
    cin>>p;
    if (p ==0){
        cout<<"0";
    }
    else if(p == 1){
        cout<<"1";
    }
    else if(p>=2){



    cout<<"The number at n th sequnce of fibonacci is "<<fib(p)<<endl;
    }
    return 0;


}