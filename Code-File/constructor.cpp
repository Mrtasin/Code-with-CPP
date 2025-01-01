#include<iostream>
using namespace std;

class Item  {
    private:
        int num;
        int *ptr;
    public:
        Item()  {
            ptr = new int;
        }
        Item(int a, int b)  {
            ptr = new int;
            num = a; *ptr = b;
        }
        void setptr(int data)   {
            *ptr = data;
        }
        int getptr()    {
            return *ptr;
        }

        void setNum(int num)    {
            this->num = num;
        }
        int getNum()    {
            return num;
        }

        void del()  {
            delete ptr;
        }
};

int main()  {
    Item i2(10,20),i1;
    Item obj = i2;
    i2.del();
    cout<<obj.getptr()<<" "<<obj.getNum()<<endl;

    cout<<endl;
    return 0;
}