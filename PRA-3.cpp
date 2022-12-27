#include<iostream>
using namespace std;

class Complex{
    private:
    int real,img;
    public:
    Complex(){
        real=0;
        img=0;
    }

    Complex(int a, int b){
        real=a;
        img=b;
    }

    Complex operator +(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

    void print(){
        cout<<"The Complex Number is "<< real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(1,2);
    c1.print();
    Complex c2(2,1);
    c2.print();
    Complex c3;
    c3=c1+c2;
    c3.print();
}