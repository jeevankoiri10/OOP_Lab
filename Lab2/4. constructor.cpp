//Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy
//constructor) and destructor taking class complex as an example.
#include<iostream>
using namespace std;
class ConstructorComplex
{
	float real;
	float imag;
	public:
		ConstructorComplex()
		{
			real = 0;
			imag = 0;
		}
		ConstructorComplex(int r, int i)
		{
			real = r;
			imag = i;
		}
		ConstructorComplex(ConstructorComplex &c)
		{
			real = c.real;
			imag = c.imag;
		}
		~ConstructorComplex()
		{
			cout<<"destructed!"<<endl;
		}
		void showdata()
		{
			cout<<real<<"+i"<<imag<<endl;
		}
		
};

int main()
{
	ConstructorComplex c2(4.1,5.1), c3(c2);
	c1.showdata();
	c2.showdata();
	c3.showdata();
	return 0;
	
	
}
