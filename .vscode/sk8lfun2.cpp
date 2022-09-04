#include<iostream>
using namespace std;

int set_bit(int n){
    int count = 0;
    while(n!=0){ 
     
    int p = (n & 1 );
    if(p){ count++;
    }
    n = n>>1;
    }
    return count;
    

}

int main(){
    cout<<"Enter any two number a and b"<<endl;
    int a,b;

    cin>>a>>b;

    int total = set_bit(a) + set_bit(b);
    cout<<total;
    return 0;

}

