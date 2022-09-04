#include<iostream>
#include<math.h>
using namespace std;

int main()

{
    cout<<"Enter the Binary number "<<endl;
    int n;
    cin>>n;
    int ans =0,i=0;
    

while(n != 0){
   int p = n % 10;
   
if(p == 1){
   ans = ans + pow(2,i);
  }
n=n/10;
i++;

}
cout<<ans;
return 0;

}
