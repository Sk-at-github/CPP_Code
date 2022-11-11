#include<iostream>
using namespace std;

char convlowercase(char ch){
   if(ch >='a' && ch <='z'){
    return ch;
   }
   else {
    if (ch >='A' && ch <='Z'){
        return  (ch - 'A' + 'a');
    }
   }
}




/*  
int lengthpfchar(char arr[10]){
    int count = 0;
    for(int i = 0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverseChar(char arr[],int n){
    int i = 0;
    int e = n-1;
    while(i<e){
        swap(arr[i],arr[e]);
        i++,e--;
    }
    cout<<arr<<endl;

}  

bool checkpalindrome(char arr[],int n){
int i = 0; int s = n-1;
while(i<=s){
    if(arr[i]!=arr[s]){
        return 0;
    }
    i++,s--;
}
return 1;
}
*/

int main(){
    char arr[10];
    char ch[20];
    //cout<<"Enter the char 1 "<<endl;
    //cin>>ch;

    /*
    ch[2] = '\0';
    cout<<ch<<endl;

    
    cout<<"Enter the char array "<<endl;
    cin>>arr;
    int len = lengthpfchar(arr);
    cout<<"Length of char is "<< len <<endl;
    reverseChar(arr,len);
    cout<<"Reverse of char is "<< arr <<endl;
   
    cout<<"The given char array is palindrtome or not "<< checkpalindrome(arr,len) <<endl;
    
    */
    cout<<"The lowercase for the given char  is "<<convlowercase('S')<<endl;
    return 0;
}