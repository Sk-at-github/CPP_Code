#include<iostream>
using namespace std;
// dhyan rekhna hai nested else wale me else aue if ke bracket nahi lagana
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;

    if((n>=65)&&(n<=90)){
        cout<<"Upper Case Letter"<<endl;
    }
    else 
        if((n>=77)&&(n<=122)){
            cout<<"Lower case Letter"<<endl; }
        
    
    else  
        if((n<=9)&&(n>=0)){
            cout<<"Digit number"<<endl;
        }
    
            
        
    

    return 0;

}