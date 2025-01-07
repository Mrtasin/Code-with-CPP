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

        friend void Dispaly(Complex);

        friend ostream& operator<<(ostream &, Complex);

        friend istream& operator>>(istream&, Complex&);
};

void Dispaly(Complex c1)  {
    cout<<c1.real<<"+i"<<c1.imag<<endl;
}

istream& operator>>(istream& input, Complex& c1) {
    cout<<"Enter real part : ";
    cin>>c1.real;
    cout<<"Enter imag part : ";
    input>>c1.imag;
    return cin;
}


ostream& operator<<(ostream& output, Complex c1) {
    output<<c1.real<<"+i"<<c1.imag<<endl;
    return output;
}


int main()  {
    Complex c1;
    cin>>c1;
    cout<<c1;
    cout<<endl;
    return 0;
}