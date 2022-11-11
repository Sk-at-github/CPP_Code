#include<iostream>
using namespace std;

int gcd(int a, int b){
        while(a!=b){

    
    if(a>=b){
        
            a=a-b;
    }
     else{
            b=b-a;
        }
    
        }
    
    return a; 
}

int main(){
    cout<<"Please Enter the two number"<<endl;
    int a,b;
    cin>>a>>b;
   int d = gcd(a,b);
   cout<<"The gcd of two number is "<<d<<endl;
   return 0;
}