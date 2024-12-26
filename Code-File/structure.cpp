#include<iostream>
#include<string.h>
using namespace std;

struct Book
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
        Book Input_Data()   {
            Book temp;
            cout<<"Enter Book Id    : ";
            cin>>temp.BookId;
            cout<<"Enter Book Price : ";
            cin>>temp.Price;
            cout<<"Enter Book Title : ";
            cin.ignore();
            fgets(temp.BookTitle, 20, stdin);

            return temp;
        }
};


int main()  {
    // Book b2 = {101,5000,"C++"};
    Book b1;
    // b1.BookId = 105;
    // b1.Price = 5000;
    // strcpy(b1.BookTitle, "C++");
    // b1.BookTitle = "C++"; Error 

    b1 = b1.Input_Data();
    b1.Dispaly();
    cout<<endl;
    return 0;
}