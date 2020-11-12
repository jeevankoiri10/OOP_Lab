// Write a program in CPP to convert the distance 
// in meters entered by the user into distance in feet and
// inch using the concept of basic to user defined 
// data conversion.

#include<iostream>
using namespace std;
class Distance
{
	float feet;
	float inch;
	public:
		Distance()
		{
		feet = 0;
		inch = 0;	
		}
		Distance(float m)
		{
			float tempfeet;
			tempfeet = m * 3.2808;
			feet = int(tempfeet);
			inch = 12 * (tempfeet - feet); 
		}
			
		void showdata()
		{
			cout<<feet<<" feet "<< inch<<" inch ";	
		}
};

int main()
{
	Distance m1;
	cout<<"Enter length in meter: ";
	float meter;
	cin>>meter;
	m1 = meter; // basic to user-defined data conversion
	m1.showdata();
	return 0;
	
}


