#include<iostream>
using namespace std;

int AP(int m){
   // int n =m;
   return (3*m + 7);
}

int main(){
    cout<<"Enter The nth number you want to know"<<endl;
    int p;
    cin>>p;
    int ap = AP(p);
    cout<<"The nth number is "<<ap;
    return 0;

}