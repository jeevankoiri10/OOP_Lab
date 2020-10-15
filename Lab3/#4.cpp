//Write a program in CPP to find the sum of two complex numbers using the concept of the overloading
//binary + operator using non-member/friend function.
#include<iostream>
using namespace std;

class complex
{
private:
    float real;
    float imag;
public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    void showdata()
    {
       cout<<real<<"+i"<<imag;
    }
    friend complex operator +(complex &, complex);

};

complex operator +(complex &c, complex c1)
    {
        complex temp;
        temp.real = c.real + c1.real;
        temp.imag = c.imag + c1.imag;
        return temp;
    }

int main()
{

    complex c1(1, 1), c2(1.1, 1.2), csum;
    csum = c1 + c2;  //c3 =
    csum.showdata();
    return 0;
}
