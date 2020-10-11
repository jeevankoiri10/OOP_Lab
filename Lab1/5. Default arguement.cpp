//WAP in CPP to illustrate the concept of default arguments.
#include<iostream>
using namespace std;

float si(float p=100, float t=1, float r=10)
{
	return (p*t*r)/100;
}

int main()
{
	float i, j;
	i = si();
	cout<<i<<endl;
	j = si(1, 2, 4);
	cout<<j;
}
