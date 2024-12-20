#include<iostream>
using namespace std;
inline int Add(int, int, int=0, int=0);
int main()  {
    cout<<"Sum is : "<<Add(40,50)<<endl;
    cout<<"Sum is : "<<Add(40,50,10)<<endl;

    cout<<endl;
    return 0;
}

int Add(int a, int b, int c, int d)   {
    return (a+b+c+d);
}