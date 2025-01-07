#include<iostream>
using namespace std;

class Base
{
    public:
        void display(int x)
        {
            cout << "Display of Base" << endl;
        }
};

class Derived : public Base
{
    public:
        void display()
        {
            cout << "Display of Derived" << endl;
        }
};


int main()
{
    // Base *ptr;
    Derived d;
    d.Base::display(10);


    // d.Base::display(10); // Display of Base
    // // ptr->display(); // Display of Derived
    cout<<endl;
    return 0;
}