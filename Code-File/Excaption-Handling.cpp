#include<iostream>
#include<string>
using namespace std;

class Zero_Error    {
    private:
        string data;
    public:
        Zero_Error(string data) : data(data){}
        
        string what()  {return data;}
};

int main()
{
    int a,b;
    float c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    try{
        if(b == 0)
            throw Zero_Error("Zero Error Class");
        c = (float)a/b;
        cout<<"value is : "<<c<<endl;
    }
    catch(const char *ch) {
        cout<<ch<<endl;
    }
    catch(int a)    {
        cout<<"Zero Error"<<endl;
    }
    catch(bool a)    {
        cout<<"Zero Error Bool Data"<<endl;
    }
    catch(Zero_Error &e) {
        cout<<e.what()<<endl;
    }
   
   
    cout<<"End Program"<<endl;
    cout<<endl;
    return 0;
}