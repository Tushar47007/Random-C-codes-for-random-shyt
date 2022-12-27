#include<iostream>
using namespace std;

class weight{
    private:
    float kg;
    public:
    weight(){
        kg=0.0;
    }
    weight(float t){
        kg=t;
    }

    void print(){
        cout<<"The Weight is "<<kg<<" kilograms!"<<endl;
    }

    void operator ++(){
        ++kg;
    }
};

int main(){
    weight w1;
    w1.print();
    ++w1;
    w1.print();

}