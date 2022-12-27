#include<iostream>
using namespace std;

void prime(int a){
    int flag;
    if(a==0||a==1){
        cout<<"Entered Number is NOT PRIME!";
    }
    else{
        for(int i=2;i<=a/2;++i){
            if(a%i==0){
                flag=0;
            }
            else{
                cout<<"Entered Number is Prime!";
            }
        }
        if(flag==0){
            cout<<"Entered Number is NOT PRIME!";
        }
    }
}

int main(){
    prime(2);
}