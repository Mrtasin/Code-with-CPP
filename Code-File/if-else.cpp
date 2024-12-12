#include<iostream>
using namespace std;

int main()  {
    // int year;
    // cout<<"Enter the year : ";
    // cin>>year;
    // (x%2 == 0) ? cout<<"Even Number"<<endl : cout<<"Odd Number"<<endl;

    // if(year%100 == 0)   {
    //     if(year%400 == 0)   {
    //         cout<<"Leap Year";
    //     }
    //     else    {
    //         cout<<"Not Leap Year";
    //     }
    // }
    // else    {
    //     if(year%4 == 0)   {
    //         cout<<"Leap Year";
    //     }
    //     else    {
    //         cout<<"Not Leap Year";
    //     }
    // }

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n == 0)  {
        cout<<"Zero"<<endl;
    }
    else if(n>0) {
        cout<<"Positive Number"<<endl;
    }
    else    {
        cout<<"Nagitive Number"<<endl;
    }

    cout<<endl;
    return 0;
}