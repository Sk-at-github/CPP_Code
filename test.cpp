#include<bits/stdc++.h>
using namespace std;


   
class   Arpit{
    //string name[20];
    public:
   double land;
    long long  wealth;
    long long sumwealth;
    long long sumland;
    
    
Arpit(){
    land = 50;
    wealth = 250000000;
    sumwealth = wealth;
    sumland = land;
}
};

class   Anjali :public Arpit{
    double land;
    long long  wealth;
    long long sumwealth;
    long long sumland;
    
    
    public:
    Anjali(){
    land =  27.5;
    wealth = 30000000;
    sumwealth = wealth + Arpit::wealth;
    sumland = land + Arpit::land;
    }

};
class   Anuj : public Arpit{    //string name[20];
    public:
    
   double land;
    long long  wealth;
    long long sumwealth;
    long long sumland;
    
    
    Anuj(){
    land = 32 ;
    wealth = 55000000;
    sumwealth = wealth + Arpit::wealth ;
    sumland = land +  Arpit::land ;
}

};
class   Prerna : public Arpit,public Anjali,public Anuj{    //string name[20];
    public:
    double land;
    long long  wealth;
    long long sumwealth;
    long long sumland;
    
    
    Prerna(){
    land = 11.5;
    wealth = 10000000;
    sumwealth = wealth + Arpit::wealth + Anjali::wealth + Prerna::wealth ;
    sumland = land +  Arpit :: land + Anjali ::land + Prerna::land ;
}
};








class   Shivam : public Arpit,public Anjali,public Anuj{    //string name[20];
    public:
    int land;
    double wealth;
    int sumwealth;
    int sumland;
    
    Shivam(){
    land = 10;
    wealth = 20000000;
    sumwealth = wealth + Arpit::wealth + Anjali::wealth + Anuj::wealth ;
    sumland = land +  Arpit :: land + Anjali ::land + Anuj::land;
    }
};
/*
class   Sanjay : public Anjali,public Anjali,public Anuj,public Shivam,public Prerna{    //string name[20];
    public:
    
    int sumwealth = wealth + Arpit::wealth + Anjali::wealth + Prerna::wealth + Shivam::wealth + Anuj::wealth;
    int sumland = land +  Arpit :: land + Anjali ::land + Prerna::land + Shivam::land + Anuj::land;

};
*/
















int main(){
    Arpit p1;
    Anuj q1;
    Anjali r1;
    Prerna s1;
    Shivam t1;
   // Sanjay u1;
    cout<<" Land "<<p1.land<<endl;
    
    


}


