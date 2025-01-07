#include<iostream>
using namespace std;
class A1
{
    public:
        A1() {
            cout << "Constructor of class A1" << endl;
        }
        void displayA1()
        {
            cout << "Class A1" << endl;
        }
};

// class A2
// {
//     public:
//         void displayA2()
//         {
//             cout << "Class A2" << endl;
//         }
// };

class B : public A1
{
    public:
        B():A1() 
        {
            cout << "Constructor of class B" << endl;
        }
        void displayB()
        {
            cout << "Class B" << endl;
        }
};

int main()
{
    B obj;
   
    cout<<endl;
    return 0;
}
