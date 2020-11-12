// WAP in CPP to convert the co-ordinates from 
// Cartesian system to polar system using the concept of
// user defined to user defined conversion by writing 
// conversion routine(constructor) in source class.
#include<iostream>
#include<cmath>
using namespace std;

//the destination class must be declared before source class
class Polar
{
	float r;
	float theta;
	public:
		Polar()
		{
			r = 0;
			theta = 0;
		}
		Polar(float m, float n) 
		{
			r = m;
			theta = n;
		}
		void showdata()
		{
			cout<<"The cartesian coordinate is :";
			cout<<"r = "<<r<<" Theta: "<<theta;
		}
};

class Cartesian //Source class--data is present here
{
	float x;
	float y;
	public:
		void getdata()
		{
			cout<<"Enter x and y: ";
			cin>>x>>y;
		}
		// Using a conversion routine as an operator
				//function in source class.
		// Conversion Routine
		operator Polar()
		{
			float tempr, temptheta;;
			tempr = sqrt(x*x + y*y);
			temptheta = atan(y/x);
			return Polar(tempr, temptheta);
		}
		
};


int main()
{
	Polar p;
	Cartesian c;
	c.getdata();
	p = c;
	p.showdata();
	return 0;
}
