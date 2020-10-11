//Write a program in CPP to input the name, roll, marks and address of n students from the user and
//display the entered details using the concept of class and objects
#include<iostream>
using namespace std;

struct student
{
	char name[20];
	int roll;
	float marks;
	char address[50];
};

class classStudent
{
	struct student s[50];
	int n;
	
	public:
		void getdata()
		{
			cout<<"Enter n";
			cin>>n;
			for (int i = 0; i < n; i++)
			{
				cout<<"Enter the name, roll, marks, address of a student: \n";
				cin>>s[i].name>>s[i].roll>>s[i].marks>>s[i].address;
			}
		}
		void showdata()
		{
			cout<<endl;
			for (int i = 0; i < n; i++)
			{
				cout<<s[i].name[i]<<"\t"<<s[i].roll<<"\t"<<s[i].marks<<"\t"<<s[i].address<<"\n";
			}
		}
 };
 
 int main()
 {
 	classStudent s;
 	s.getdata();
 	s.showdata();
 }
