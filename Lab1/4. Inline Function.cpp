//WAP in CPP to illustrate the concept of inline function.
#include<iostream>
using namespace std;

inline float calculateSI(float p, float t, float r)
{
	return p*t*r/100;
}

int main()
{
	float t = 1.0;
	float r = 10;
	cout<<"P\tT\tR\tSI\n";
	for (float p = 1000; p <= 5000; p = p + 1000)
	{
		cout<<p<<"\t"<<t<<"\t"<<r<<"\t"<<calculateSI(p,t,r)<<endl;
    }
    return 0;
}
