//WAP in CPP to illustrate the concept of inline function.
#include<iostream>
using namespace std;

inline void showname()
{
	cout<<"Repeatative loop\n";
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		showname();
    }
}
