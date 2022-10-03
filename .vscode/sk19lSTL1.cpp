//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
/*
int arr[3]={1,2,3}; //Normal array
array<int,4> Krishna ={1,2,3,4}; //Normal array
int size = Krishna.size();

for(int i =0;i<size ;i++){
    cout<<Krishna[i]<<endl;
}
cout<<"Element at 2nd Index "<<Krishna.at(2)<<endl;
cout<<"Empty or not "<<Krishna.empty()<<endl;
cout<<"First element "<<Krishna.front()<<endl;
cout<<"Last element "<<Krishna.back()<<endl;

*/
/*

vector<int> v;
vector<int> a(5,1);
vector<int> last(a);
cout<<"Print Last "<<endl;
for(int i: last){
    cout<<i<<" ";
}
cout<<endl;

cout<<"capacitgy of "<<v.capacity()<<endl;
v.push_back(1);
cout<<"capacitgy of "<<v.capacity()<<endl;
v.push_back(2);
cout<<"capacitgy of "<<v.capacity()<<endl;
v.push_back(3);
cout<<"capacitgy of "<<v.capacity()<<endl;
cout<<"size "<<v.size()<<endl;


cout<<"Element at 2nd index "<<v.at(2)<<endl;
cout<<"Front"<<v.front()<<endl;
cout<<"Back "<<v.back()<<endl;

cout<<"Befor pop "<<endl;
for(int i : v){
    cout<<i<<" ";
}
cout<<endl;


v.pop_back();
//cout<<"After Pop "<<v.pop_back()<<endl;
for(int i : v ){
    cout<<i<<" ";
}
cout<<endl;

cout<<"Before Clear size "<<v.size()<<endl;
v.clear();
cout<<"After clear size "<<v.size()<<endl;

*/
/*
deque <int> d;
d.push_back(1);
d.push_front(2);
//d.pop_back();
//d.pop_front();
cout<<"Front "<<d.front()<<endl;
cout<<"back "<<d.back()<<endl;


cout<<"Empty or not "<<d.empty()<<endl;
d.erase(d.begin(),d.begin()+1);

cout<<"After Erase "<<d.size()<<endl;

for(int i : d){
    cout<<i<<endl;
}
*/

//list
/*
list <int> l;
list <int> n(6,100);

for(int i : n){
    cout<<i<<" ";
}
cout<<endl;

l.push_front(1);
l.push_back(2);

for(int i : l){
    cout<<i<<" ";
}
cout<<endl;
l.erase(l.begin());

cout<<" After erase "<<endl;
for(int i : l){
    cout<<i<<" ";
}
cout<<endl;
cout<<"The size is "<<l.size()<<endl;

*/

// stack
/*

stack <string> s;
s.push("jay");
s.push("Shree");
s.push("Krishna");

cout<<"Top element "<<s.top()<<endl;
s.pop();
cout<<"Top Element after pop is "<<s.top()<<endl;
cout<<"Size of stack is "<<s.size()<<endl;
cout<<"Check whether the element is empty "<<s.empty()<<endl;

*/

//queue 
/*

queue <string> l;
l.push("Jay");
l.push("Shree");
l.push("krishna");

cout<<"Element at front before pop "<<l.front()<<endl;
l.pop();

cout<<"Element at front before pop "<<l.front()<<endl;
cout<<"Size of queue is "<<l.size()<<endl;

*/
//Algorithm part 

vector<int> v;
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);

cout<<"Element 6 is at "<<binary_search(v.begin(),v.end(),6)<<endl; // True ya false batayega ye
cout<<"Upper bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
cout<<"Lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
int a = 3,b = 5;
cout<<"Max of two number "<<max(a,b)<<endl;
cout<<"Min of two number "<<min(a,b)<<endl;
swap(a,b);
cout<<"Number after swapping a = "<<a<<" b = "<<b<<endl;

string str = "RadhaRAni";
reverse(str.begin(),str.end());
cout<<"String after reverse is "<<str<<endl;

vector<int> l;
l.push_back(1);
l.push_back(3);
l.push_back(6);
l.push_back(7);

rotate(l.begin(),l.begin()+1,l.end());
cout<<"After rotate "<<endl;

for(int i  : l){
    cout<<i<<" ";
}
cout<<endl;
sort(l.begin(),l.end());
cout<<"After sorted "<<endl;
for(int i  : l){
    cout<<i<<" ";
}
cout<<endl;




return 0;

}