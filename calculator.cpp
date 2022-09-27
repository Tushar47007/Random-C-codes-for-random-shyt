#include<iostream>
using namespace std;
class math{
    private:
    double t=0,u=0;

    public:
    math()= default;
    math(double s,double h){
        t=s;
        u=h;
    }
    double a(){
        return t+u;
    }

    double s(){
        return t-u;
    }

    double m(){
        return t*u;
    }

    double d(){
        return t/u;
    }

};


int main()
{
    math m1;
    int n,i;
    double j,k;
    while(1)
    {
    cout<<endl<<endl<<"Enter your choice:"<<endl;
    cout<<"1.Addition:"<<endl;
    cout<<"2.Substraction:"<<endl;
    cout<<"3.Multiply:"<<endl;
    cout<<"4.Divison:"<<endl;
   // cout<<"5.Absolute Value:"<<endl;
    cout<<"0.Exit:"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        {
            cout<<"To perform operation with ..."<<endl<<"Old values press 1 "<<endl<<"New input values press 2"<<endl<<"Reset to zero press any other number"<<endl;
            cin>>i;
            if(i==1)
            {
                math m1(j,k);
                cout<<endl<<"Addition is : "<<m1.a();
            }
            else if(i==2)
            {
                cout<<"Enter first value ";
                cin>>j;
                cout<<endl<<"Enter Second value ";
                cin>>k;
                math m1(j,k); // get value to the constructor
                cout<<endl<<"Addition is : "<<m1.a();
            }
            else
            {
                j=0;
                k=0;
                math m1(j,k);
            }
            
            break;
        }

        case 2:
        {
            cout<<"To perform operation with ..."<<endl<<"Old values press 1 "<<endl<<"New input values press 2"<<endl<<"Reset to zero press any other number"<<endl;
            cin>>i;
            if(i==1)
            {
                math m1(j,k);
                cout<<endl<<"Substraction is : "<<m1.s();
            }
            else if(i==2)
            {
                cout<<"Enter first value ";
                cin>>j;
                cout<<endl<<"Enter Second value ";
                cin>>k;
                math m1(j,k);
                cout<<endl<<"Substraction is : "<<m1.s();
            }
            else
            {
                j=0;
                k=0;
                math m1(j,k);
            }
            
            break;
        }

        case 3:
        {
            cout<<"To perform operation with ..."<<endl<<"Old values press 1 "<<endl<<"New input values press 2"<<endl<<"Reset to zero press any other number"<<endl;
            cin>>i;
            if(i==1)
            {
                math m1(j,k);
                cout<<endl<<"Multiplication is : "<<m1.m();
            }
            else if(i==2)
            {
                cout<<"Enter first value ";
                cin>>j;
                cout<<endl<<"Enter Second value ";
                cin>>k;
                math m1(j,k);
                cout<<endl<<"Multiplication is : "<<m1.m();
            }
            else
            {
                j=0;
                k=0;
                math m1(j,k);
            }
            break;
        }

        case 4:
        {
            cout<<"To perform operation with ..."<<endl<<"Old values press 1 "<<endl<<"New input values press 2"<<endl<<"Reset to zero press any other number"<<endl;
            cin>>i;
            if(i==1)
            {
                math m1(j,k);
                cout<<endl<<"Division is : "<<m1.d();
            }
            else if(i==2)
            {
                cout<<"Enter first value ";
                cin>>j;
                cout<<endl<<"Enter Second value ";
                cin>>k;
                math m1(j,k);
                cout<<endl<<"Division is : "<<m1.d();
            }
            else
            {
                j=0;
                k=0;
                math m1(j,k);
            }
            break;
        }

        case 0:
        {
            cout<<"FUCK OFF "<<endl;
            exit(0);
        }

        default:
        {
            cout<<"DUMB 433 or WH4T!?!?"<<endl;
        }
    
    }
    }
    
}