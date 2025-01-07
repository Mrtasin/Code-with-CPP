#include<iostream>
using namespace std;

class Complex   {
    private:
        int real;
        int imag;
    public:
        void setdata(int real, int imag)    {
            this->real = real;
            this->imag = imag;
        }
        void Display()  {
            cout<<real<<"+i"<<imag<<endl;
        }
        Complex add(Complex c1) {
            Complex temp;
            temp.real = real + c1.real;
            temp.imag = imag + c1.imag;
            return temp;
        }

        Complex operator+(Complex c1) {
            Complex temp;
            temp.real = real + c1.real;
            temp.imag = imag + c1.imag;
            return temp;
        }

        Complex operator-(Complex c1) {
            Complex temp;
            temp.real = real - c1.real;
            temp.imag = imag - c1.imag;
            return temp;
        }

        Complex operator-() {
            Complex temp;
            temp.real = -real;
            temp.imag = -imag;
            return temp;
        }

        Complex operator++() {
            Complex temp;
            temp.real = ++real;
            temp.imag = ++imag;
            return temp;
        }
        Complex operator++(int) {
            Complex temp;
            temp.real = real++;
            temp.imag = imag++;
            return temp;
        }
        Complex operator--() {
            Complex temp;
            temp.real = --real;
            temp.imag = --imag;
            return temp;
        }
        Complex operator--(int) {
            Complex temp;
            temp.real = real--;
            temp.imag = imag--;
            return temp;
        }
        bool operator==(Complex c1) {
            if(real == c1.real && imag == c1.imag)
                return true;
            else
                return false;
        }

};

int main()  {
    Complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(3,5);
    // c3 = c1.add(c2);
    // c3 = c1 + c2;
    // c3 = c1 - c2;
    // c3 = c1.operator+(c2);
    // c3 = ++c2;
    c3 = c2;
    if(c3 == c2)    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    c3 = c2++;
    c3.Display();
    c2.Display();
    cout<<endl;
    return 0;
}