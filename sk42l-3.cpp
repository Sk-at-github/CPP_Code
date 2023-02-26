#include<bits/stdc++.h>
using namespace std;
// 
class sk{
 public :
 int health;
 static int level;
//  void sethealth(health){
//     this->health = health;
//  }

static int fun(){
    return level;
}
void gethealth(){
    cout<<"The health is "<<health<<endl;

 }
 sk(){
    cout<<"Simple constructor called"<<endl;
 }
 ~sk(){
    cout<<"Destructor called"<<endl;
    
 }


};

int sk :: level = 5;


int main(){
//static object 
//     sk krishna;

// //dynaic object
// sk *p = new sk();  //destructor will not called for dynamic object automatic it should be called manually
// delete p;

// static variable and function
cout<<" Static variable belong to class "<<sk::level<<endl;
cout<<"static function can acess only static memeber "<<sk::fun()<<endl;


}