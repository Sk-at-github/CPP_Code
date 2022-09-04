#include<iostream>
#include<math.h>
using namespace std;

//Compiler may mis behave so you may test on online compiler


int main(){
cout<<"Enter the number "<<endl;
int n;
cin>>n;
int i = 0,ans=0;

while(n!=0){

   int bit = n & 1;
   ans = ( bit * pow(10, i)) + ans;
   n = n >> 1;
   i++; 

}
cout<<"Answer is "<<ans<<endl;


return 0;

}