#include<iostream>
using namespace std;
void Print();
int F1(int);
void PrintN(int);
int main()  {

    PrintN(10);
    cout<<endl;
    return 0;
}

void Print()    {
    cout<<"Tasin"<<endl;
    Print();
}

int F1(int n)   {
    if(n == 1)
        return 1;
    return n+F1(n-1);
}

void PrintN(int n)  {
    if(n>0) {
        PrintN(n-1);
        cout<<n<<" ";
    }
}