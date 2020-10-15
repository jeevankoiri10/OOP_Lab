//Write a program in CPP to overload unary ++ for postfix
//and prefix increment operation on complex
//numbers using member function.
#include <iostream>
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
    complex operator ++() //overloading of preincrement
    {
        complex temp;
        temp.real = ++real;
        temp.imag = ++imag;
    }
    complex operator ++(int) //overloading of preincrement
    {
        complex temp;
        temp.real = real++;
        temp.imag = imag++;
    }
};



int main()
{
    complex c1(1, 2), c2(1.1, 2.2), c3;
    c2 = ++c1; //c2 = c1.operator++();
    c3 = c2++; //c3 = c2.operator++(int);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
