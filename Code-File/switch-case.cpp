#include<iostream>
#include<stdlib.h>
using namespace std;

int main()  {
    // int x;
    // cout<<"Enter a number : ";
    // cin>>x;
    // switch (x)
    // {
    //     case 10:
    //         cout<<"TEN"<<endl;
    //         break;
    //     case 5:
    //         cout<<"Five"<<endl;
    //         break;
    //     case 1:
    //         cout<<"ONE"<<endl;
    //         break;
    //     default:
    //         cout<<"Enter valid value"<<endl;
    //         break;
    // }
    // int choice,a,b;
    // while (true)     {
    //    cout<<"Enter 1 For Add"<<endl;
    //    cout<<"Enter 2 For Sub"<<endl;
    //    cout<<"Enter 3 For Mul"<<endl;
    //    cout<<"Enter 4 For Div"<<endl;
    //    cout<<"Enter 5 For Exit"<<endl;
    //    cout<<"Enter your choice : ";
    //    cin>>choice;
    //    system("clear");
    //    switch(choice)   {
    //         case 1:
    //             cout<<"Enter two numbers : ";
    //             cin>>a>>b;
    //             cout<<"Sum is "<<a+b<<endl;
    //             break;
    //         case 5:
    //             cout<<"\nThank You\n";
    //             exit(0);
    //    }
    // }
    

    int year;
    cout<<"Enter a year : ";
    cin>>year;
    switch(year%100 == 0)   {
        case 1:
            switch (year%400 == 0)
            {
                case 1:
                    cout<<"Leap Year";
                    break;
                case 0:
                    cout<<"Not Leap Year";
                    break;
            }
            break;
        case 0:
            switch (year%4 == 0)
            {
                case 1:
                    cout<<"Leap Year";
                    break;
                case 0:
                    cout<<"Not Leap Year";
                    break;
            }
    }

    cout<<endl;
    return 0;
}
