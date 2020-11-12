// WAP in CPP to convert the co-ordinates from Cartesian 
// system to polar system (same as 3) using the concept of
// user defined to user defined conversion by writing 
// conversion routine in destination class.  p = c;
#include<iostream>
#include<cmath>
using namespace std;
// the source class must be declared before destination class.
class Cartesian
{
	float x, y;
	public:
		void getdata()
		{
			cout<<"Enter x and y:";
			cin>>x>>y;
		}
		float returnx()
		{
			return x;
		}	
		float returny()
		{
			return y;
		}		
};

class Polar
{
	float r, theta;
	public:
		Polar()
		{
			r = 0;
			theta = 0;
		}
		void showdata()
		{
			cout<<"The cartesian coordinate is :"<<endl;
			cout<<"r: "<<r<<" Theta: "<<theta;
		}
		
		Polar(Cartesian c0)
		{
			r = sqrt((c0.returnx() * c0.returnx() ) + (c0.returny() * c0.returny()));
			theta = atan(c0.returny() / c0.returnx());
		}
};


int main()
{
	Cartesian c;
	Polar p;
	c.getdata();
	p = c;
	p.showdata();
	return 0;
}


