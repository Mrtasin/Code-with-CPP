#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void display()
        {
            cout << "Display of Base class" << endl;
        }

        virtual void Print() = 0;
};

class Derived : public Base
{
    public:
        void display()
        {
            cout << "Display of Derived class" << endl;
        }

        void Print()
        {
            cout << "Print of Derived class" << endl;
        }
};


int main()
{
    // Base *ptr;
    // Derived d;
    // int num;
    // cout<<"Enter 1 for Calling Base class "<<endl;
    // cout<<"Enter 2 for Calling Derived class "<<endl;
    // cin>>num;
    // if(num==1)
    //     ptr = new Base();
    // else if(num==2)
    //     ptr = new Derived();

    // ptr->display();

    Derived d;
    d.Print();


    cout<<endl;
    return 0;
}
