#include<iostream>
using namespace std;

class Book
{
    private:
        int BookId;
        float Price;
        char BookTitle[20];
    public:
        void Dispaly()  {
            cout<<"Book id    : "<<BookId<<endl;
            cout<<"Book Price : "<<Price<<endl;
            cout<<"Book Title : "<<BookTitle<<endl;
        }
        void Input_Data()   {
            cout<<"Enter Book Id    : ";
            cin>>BookId;
            cout<<"Enter Book Price : ";
            cin>>Price;
            cout<<"Enter Book Title : ";
            cin.ignore();
            fgets(BookTitle, 20, stdin);
        }
};


class Complex
{
    private:
        int real;
        int imag;
    public:
        void setValue(int a, int b) {
            real = a; imag = b;
        }
        inline void PrintValue();
        
};

void Complex::PrintValue()   {
    cout<<real<<"+i"<<imag<<endl;
}


class Item  {
    private:
        static int i;
    public:
        static int F1() {
            return i;
        }
}; int Item::i = 50;

int main()  {
    // Book b1,b2;
    // b1.Input_Data();
    // // b2.Input_Data();
    // b1.Dispaly();

    // Complex c1;
    // Book b1;
    // b1.PrintValue();
    // c1.setValue(3,4);
    // c1.PrintValue();
    Item et;

    cout<<Item::F1();

    cout<<endl;
    return 0;
}