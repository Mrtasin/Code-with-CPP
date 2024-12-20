#include<iostream>
using namespace std;
void Print();
int Add();
int Sum(int a, int b);

int main()  {

    int temp = Add();
    cout<<"Sum is : "<<temp<<endl;
    cout<<endl;
    return 0;
}

void Print()    {
    cout<<"Hello"<<endl;
}

int Add()   {
    int  a,b;
    cout<<"Enter tow numbers : ";
    cin>>a>>b;
    return (a+b);
}

int Sum(int a, int b)   {
    return (a+b);
}