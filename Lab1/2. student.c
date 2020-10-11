//WAP in C to input the name, roll, marks and address of n students entered by the user and display the
//entered details using the concept of structure.
#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
	char address[50];
	
};

int main()
{
	int i, n;
	struct student s[1000];
	printf("\nEnter n: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter name, Roll, marks, address: ");
		scanf("%s%d%f%s",s[i].name, &s[i].roll, &s[i].marks, s[i].address);
	}
	
	printf("\nThe Entered details are:");
	for (i = 0; i < n; i++)
	{
		printf("%s\t%d\t%f\t%s",s[i].name, s[i].roll, s[i].marks, s[i].address);
	}
	
	return 0;
	
}
