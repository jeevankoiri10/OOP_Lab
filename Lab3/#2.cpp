//Write a program in CPP to overload unary ++ for postfix
//and prefix increment operation on complex
//numbers using non-member/friend function.

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
    friend complex operator ++(complex &);
    friend complex operator ++(complex &, int);
};
    complex operator ++(complex &c) //overloading of preincrement
    {
        complex temp;
        temp.real = ++c.real;
        temp.imag = ++c.imag;
    }
    complex operator ++(complex &c, int) //overloading of preincrement
    {
        complex temp;
        temp.real = c.real++;
        temp.imag = c.imag++;
    }




int main()
{
    complex c1(1, 2), c2(1.1, 2.2), c3;
    c2 = ++c1; // c2 = operator++(c1);
    c3 = c2++; //c3 = operator++(c2, int);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
