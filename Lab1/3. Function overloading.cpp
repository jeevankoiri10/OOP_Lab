//WAP in CPP to find the area of circle and rectangle using the concept of function overloading.

#include<iostream>
using namespace std;
#define PI 3.14

void area(float);
void area(float, float);

void area(float r)
{
	float area;
	area = PI * r * r;
	cout <<"circle "<<area; 	
}
void area(float l, float b)
{
	cout <<"rectangle "<<l*b;
}

int main()
{
	area(22);
	area(22,33);
	return 0;
}
