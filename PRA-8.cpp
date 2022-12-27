#include<iostream>
#include<iostream>
using namespace std;

int add(int l){
    return l*l;
}

float add(float h){
    return h*h;
}

double add(float h){
    return h*h;
}

int main(){
    int l;
    float h;
    cout<<"Enter integer value to Square!"<<endl;
    cin>>l;
    cout<<"The Square of Integers is: "<<add(l)<<endl;
    cout<<"Enter Float values to Square together!"<<endl;
    cin>>h;
    cout<<"The Square of Float is: "<<add(h)<<endl;

}