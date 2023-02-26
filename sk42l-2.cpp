// Shallow copy and deep copy


// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Shivam{
    public :
    int roti;
    char chawal;
    char *name;

    Shivam(){
        cout<<"Constructor called "<<endl;
        name = new char[100];
    }
  // copy constructor created for deep copy
    Shivam(Shivam& obj){
        char *ch = new char[(strlen(obj.name)+1)];
        strcpy(ch,obj.name);
        this->name = ch;
        this->roti = obj.roti;
        this->chawal = obj.chawal;

    }

    void setRoti(int roti){
        this->roti = roti;
    }
    void setchawal(char chawal){
        this->chawal = chawal;
    }
    void setName(char name[]){
         strcpy(this->name, name);
        // this->name = name;

    }
    void print(){
        cout<<" name is "<<this->name<<endl;
        cout<<" roti is "<<this->roti<<endl;
        cout<<" chawal is "<<this->chawal<<endl;
    }

};

int main(){
    Shivam shiva;
    char  p[20] = "Bhar pet";
    shiva.setRoti(6);
    shiva.setchawal('F');
    shiva.setName(p);
    shiva.print();
    Shivam Samar(shiva);
    // Shivam Samar = shiva;
    Samar.print();

    shiva.name[0]='g';
    shiva.print();  // both shiva and print will give same value even
    //  if the change is done in only one only because they share
    //   same address i.e Shallow copy
    Samar.print();
    

}
