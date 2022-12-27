#include<iostream>
using namespace std;

int add(int l, int b){
    return l+b;
}

float add(float h,float ba){
    return h+ba;
}

int main(){
    int l,b;
    float h,ba;
    cout<<"Enter two integer value to add together!"<<endl;
    cin>>l>>b;
    cout<<"The Addition of Integers is: "<<add(l,b)<<endl;
    cout<<"Enter Two Float values to add together!"<<endl;
    cin>>h>>ba;
    cout<<"The Addition of Float is: "<<add(h,ba)<<endl;

}