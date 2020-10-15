//Write a program in CPP to find the sum of two complex numbers using the concept of the overloading
//binary + operator using member function.
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
    complex operator +(complex c1)
    {
        complex temp;
        temp.real = real + c1.real;
        temp.imag = imag + c1.imag;
        return temp;
    }
};
int main()
{

    complex c1(1, 1), c2(1.1, 1.2), csum;
    csum = c1 + c2; //csum = c1.operator+(c2);
    csum.showdata();
    return 0;
}

