#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string s1 = "Hare krishna ";
    string s2 = "Shri Radhey";

    // str.assign("radheyradhey");
    str = s1 + s2;
    cout << "The name of your string is " << str << endl;
    // cin>>str;
    // getline(cin,str);
    // cout<<"compare the value of s1 and s2 "<<s2.compare(s1)<<endl;

    // cout<<"The lenggth of the string is "<<str.length();
    // cout<<"The size of the string is "<<str.size()<<" and the length is "<<str.length();

    // cout<<"The string at str is "<<str.at(3)<<endl;
    // cout<<"The string at str is "<<str[0]<<endl;

    /* str.clear();
    if(str.empty()){
        cout<<"The string is empty. "<<endl; 
    } */

    // str.resize(20);
    //cout<<"The resize string is "<<str;

   // str.erase(3,3);
   // cout<<"The new string after erase is "<<str<<endl;
   
  // s1.push_back('1');
   // cout<<"S1 after push_back "<<s1<<endl;
   // s1.pop_back();
   // cout<<"S2 after pop_back "<<s1<<endl;
  // cout<<"The capacity of string s1 is "<<s1.capacity()<<endl;
   //cout<<"The capacity of string s2 is "<<s2.capacity()<<endl;
 //  cout<<"The capacity of string str is "<<str.capacity()<<endl;
/*

   */
   int ind = str.find("Shri");
   cout<<"The string  shri is at "<<ind<<endl;

  str.replace(ind,4,"Shree");
   cout<<"The string  shri is at "<<str<<endl;

  // reverse(str.begin(),str.end());
  // cout<<"The reverse of string is "<<str<<endl;

  // reverse(str.rbegin(),str.rend());
   // cout<<"The reverse of string is "<<str<<endl;
    return 0;
}
