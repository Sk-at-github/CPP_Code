#include<iostream>
using namespace std;





// void update(int *p){
//    // p = p+1;
//    // cout<<"The value of p inside function is "<<p<<endl;
//    *p = *p+1;
// }
 
 void getsum(int arr[],int n){
    cout<<"Size of arr is "<<sizeof(arr)<<endl;   //😮 the size will be 8 as it is considering the size of pointer arr
        int sum = 0;
        for(int i= 0;i<n;i++){

           sum = sum + arr[i];
        }
      cout<<"Sum of array is "<<sum<<endl;
 }

int main(){

    // int value = 5;
    // int *p = &value;
    // cout<<"Value of p before is "<<p<<endl;
    // cout<<"Value of *p before is "<<*p<<endl;
    // update(p);
    // cout<<"Value of p after is "<<p<<endl;
    // cout<<"Value of *p after is "<<*p<<endl;


    int arr[5] = {1,2,3,4,5};
    getsum(arr,5);


}