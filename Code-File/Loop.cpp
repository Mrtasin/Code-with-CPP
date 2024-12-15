#include<iostream>
using namespace std;

int main()  {
    int x = 1;
   
    // while (x<=1000)
    // {
    //     /* code */
    //     cout<<"Hella"<<endl;
    //     x++;
    // }
    
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // while (x<=n)
    // {
    //     /* code */
    //     cout<<x<<" ";
    //     x += 2;
    // }

    // while (x<=n)
    // {
    //     /* code */
    //     cout<<x*2<<" ";
    //     x++;
    // }
    // do
    // {
    //     /* code */
    //     cout<<x*2<<" ";
    //     x++;
    // } while (x<=n);



    // for(x = 1; x<=n; x++)   {
    //     if(x == 11)
    //         break;
    //     cout<<x<<" ";
    // }


    for(x = 1; x<=n; x++)   {
        if(x == 5)
           continue;
        cout<<x<<" ";
    }

    cout<<endl;
    return 0;
}