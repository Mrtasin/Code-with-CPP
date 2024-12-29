#include<iostream>
using namespace std;

int main()  {
    int *ptr;
    float *f;
    double *d;
    char *ch;

    int x = 10;
    ptr = &x;

    &x = 20;
    // cout<<ptr;

    cout<<endl;
    return 0;
}