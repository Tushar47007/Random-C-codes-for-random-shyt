#include<iostream>
using namespace std;

int area(int a){
    return a*a;
}

int area(int l, int b){
    return l*b;
}

double area(double h,double ba){
    return (h*ba)/2;
}

int main(){
    int l,b,a;
    double h,ba;
    cout<<"Enter the vlaue of Length and Breadth to find ARea of rectangle!"<<endl;
    cin>>l>>b;
    cout<<"The Area of Rectangle is: "<<area(l,b)<<endl;
    cout<<"Enter the vlaue of Height and base to find ARea of triangle!"<<endl;
    cin>>h>>ba;
    cout<<"The Area of Triangle is: "<<area(h,ba)<<endl;
    cout<<"Enter the vlaue of side to find ARea of Square!"<<endl;
    cin>>a;
    cout<<"The Area of Square is: "<<area(a)<<endl;

}