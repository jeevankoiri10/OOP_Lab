// Write a program in CPP to convert the distance 
// in feet and inch entered by the user into distance in
// meters using the concept of user defined to basic 
// data conversion
#include<iostream>
using namespace std;
class Distance
{
	float feet;
	float inch;
	public:
		void getdata()
		{
			cout<<"Enter feet and inch: ";
			cin>>feet>>inch;
		}
		
		//type conversion fuction
		operator float()
		{
			float tempfeet;
			tempfeet = inch / 12;
			feet = tempfeet + feet;
			return (feet / 3.2808);
		}
};

int main()
{
	Distance d;
	d.getdata();
	float meter;
	meter = d;
	cout<<"Meter: "<<meter;
	return 0;
}


