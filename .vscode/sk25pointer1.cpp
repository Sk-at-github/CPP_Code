#include<iostream>
using namespace std;


int main(){
    // int *q;  -->is dangerous
    //int * q = 0;// will give segmentation fault but can be assigned further value


    int num = 5 ;
    int  *p = &num;
    cout<<"befor num "<<num<<endl;
    (*p)++;
    cout<<"after num "<<num<<endl;

    //copying a pointer
    int *q = p;
    cout<< p << " - "<< q <<endl;
    cout<<*p <<" - "<< * q <<endl;

    int i = 3;
    int * t = & i;
    *t = *t + 1;
    cout<<"*t  - "<<*t<<endl;
    cout<<"Value of only t is "<<t<<endl;
    t = t + 1;
    cout<<" t - "<<t<<endl;

    


}