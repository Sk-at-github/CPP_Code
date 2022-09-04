#include<iostream>
using namespace std;

int main(){


    int m,n;
    char q;
    cout<<"Enter the first number ."<<endl;
    cin>>m;
    cout<<"Enter the 2nd number. "<<endl;
    cin>>n;
    cout<<"Enter the operation you want to perform ."<<endl;
    cin>>q;

    switch(q){
        case '+' : cout<<"m+n is "<<m+n<<endl;
        break;
        case '-' : cout<<"m-n is "<<m-n<<endl;
        break;
        case '*' : cout<<"m*n is "<<m*n<<endl;
        break;
         case '/' : cout<<"m/n is "<<m/n<<endl;
        break;
         case '%' : cout<<"m%n is "<<m-n<<endl;
        break;
        default : cout<<"Bhai basic calculator hai jyada load nahi lega "<<endl;
    }
    return 0;

}