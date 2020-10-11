//Write a program in CPP to find the sum of two complex numbers using the OOP concept.
#include<iostream>
using namespace std;

class Complex
{
	float real;
	float imag;
	public:
		void getdata()
		{
			cout<<"Enter data\n";
			cin>>real>>imag;
		}
		void showdata()
		{
			cout<<"The sum is:";
			cout<<real<<" + i"<<imag;
		}
		Complex sum(Complex c1, Complex c2)
		{
			Complex temp;
			temp.real = c1.real + c2.real;
			temp.imag = c1.imag + c2.imag;
			return temp;
		}
};

int main()
{
	Complex c1, c2, csum;
	c1.getdata();
	c2.getdata();
	csum = csum.sum(c1, c2);
	csum.showdata();
	return 0;
}
