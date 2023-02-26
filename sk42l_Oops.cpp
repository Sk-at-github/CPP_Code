#include<iostream>
// #include"sk43l.cpp"
using namespace std;
class Hero {
    
    int health;
    char level;
    public :
    
    // void sethealth(int h1 ){
    //     health = h1;
        
    // }
    // void gethealth(){
    //  cout<<health<<endl;
    // }

    // Default constructor 

    // // this keyword 
    // void sethealth(int health ){
    //     // health = health;
    //     this->health = health;
        
    // }
    //  void gethealth(){
    //  cout<<health<<endl;
    // }

    // Hero(){
    //     cout<<"Default constructor called "<<endl;
    // }

    //self made copy constructor -
    Hero(Hero& temp){
        cout<<"Copy constructor called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    Hero (int  a ,char ch){
        health = a;
        level = ch;
        
    }
    void print(){
        cout<<"HEALTH is "<<health<<endl;
         cout<<"level is "<<level<<endl;
    }

    
};




int main(){

    // Hero h1;
     

    // // cout<<sizeof(h1)<<endl; 
    //  h1.sethealth(8);
    // h1.gethealth();
 

    // Hero *b =  new Hero();
    // (*b).sethealth(5);  
    // (*b).gethealth();  //5 will be return 

    //Using this keyword
    // b->sethealth(5);
    //  b->gethealth();

    //    h1.sethealth(8);
    // h1.gethealth();

   // copy constructor 
   
    Hero h1(7,'c');
    h1.print();
     Hero R(h1);
     R.print();



   

}