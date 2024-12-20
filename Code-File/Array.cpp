#include<iostream>
using namespace std;
int SumArrayValues(int[], int);

int main()  {
    // int arr[5] = {1,2,3,4,5};
    // int arr[5] = {1};
    // int arr[5] = {1,2,3,4,5,6,7};
    // int arr[2];
    // cout<<arr[5];
    // cout<<"Enter 2 values : ";
    // for(int x = 0; x<5; x++)
    //     cin>>arr[x];
    // for(int x = 0; x<5; x++)
    //     cout<<arr[x]<<" ";

    // int arr[10];
    // int sum = 0;
    // cout<<"Enter 10 values : ";
    // for(int x= 0; x<10; x++)
    //     cin>>arr[x];
    // for(int x= 0; x<10; x++)
    //     sum += arr[x];  // sum = sum + arr[x];
    // cout<<"sum is : "<<sum<<endl;

    // int arr[10];
    // int sumOdd = 0, sumEven = 0;
    // cout<<"Enter 10 values : ";
    // for(int x= 0; x<10; x++)
    //     cin>>arr[x];
    // for(int x= 0; x<10; x++)
    //     if(arr[x]%2 == 0)   
    //         sumEven += arr[x];
    //     else
    //         sumOdd += arr[x];
    
    // cout<<"sum of Even number : "<<sumEven<<endl;
    // cout<<"sum of Odd number : "<<sumOdd<<endl;

    int arr[10];
    cout<<"Enter 10 values : ";
    for(int x= 0; x<10; x++)
        cin>>arr[x];
    cout<<"Sum is "<<SumArrayValues(arr,10);

    cout<<endl;
    return 0;
}


int SumArrayValues(int  arr[], int size)    {
    int sum = 0;
    for(int x = 0; x<size; x++)
        sum += arr[x];
    return sum;
}