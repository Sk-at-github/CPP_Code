#include<iostream>
using namespace std;

int main(){

cout<<"Enter any number "<<endl;
int n;
cin>>n;


bool isprime =1;

for(int i = 2;i< n;i++)
{
    if(n%i==0){
        isprime = 0;
        break;
    }
}

if(isprime){
    cout<<"Prime number"<<endl;

}
else {
    cout<<"Not prime";
}
return 0;

}