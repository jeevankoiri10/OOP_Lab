/*Lab 1
Review of C and Basic C++ features
*/
// 1. WAP in c to add two coomoplex numbers using the concept of structure.

#include<stdio.h>

struct complex
{
	int real;
	int imag;
};

int main()
{
	struct complex c1, c2, csum;
	printf("Enter the first complex number: ");
	scanf("%d%d",&c1.real,&c1.imag);
	printf("Enter the second complex number: ");
	scanf("%d%d",&c2.real,&c2.imag);
	csum.real = c1.real + c2.real;
	csum.imag = c1.imag + c2.imag;
	printf("The sum of the complex numbers is: %d + i%d",csum.real, csum.imag);
	return 0;
}


