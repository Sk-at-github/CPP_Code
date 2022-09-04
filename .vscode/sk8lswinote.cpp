#include<iostream>
using namespace std;


int main(){
    cout<<"No of notes needed";
   // int a = 13000;
   // int p;
    cout<<"The amount is 1330 "<<endl;
   // cin>>p;
    int money = 1000;

    switch(100){
        case 100 :{
        cout<<"Number off 100 rupee notes needed "<<(1330/100)<<endl;
        money = (1330)%100;
    
        case 50 : {
            cout<<"No of 50 rupee notes needed "<<(money/50)<<endl;
            money =(money%50);
        }
        case 20 : { 
            cout<<"No  of 20 rupee notes needed "<<(money/20)<<endl;
            money =(money%20);
        }
        case 1 : cout<<"No of 1 rupee notes needed "<<(money/1)<<endl;

        }  
    }
    return 0;

}

