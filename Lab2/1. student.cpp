//Write a program in CPP to input the name, roll, marks and address of a student from the user and
//display the entered details using the concept of class and object.

#include<iostream>
using namespace std;
class Student
{
	char name[20];
	int roll;
	float marks;
	char address[20];
	public:
		void getdata()
		{
			cout<<"Enter the name, roll, marks, address of a student: \n";
			cin>>name>>roll>>marks>>address;
		}
		void showdata()
		{
			cout<<name<<"\t"<<roll<<"\t"<<marks<<"\t"<<address<<"\n";
		}
};

int main()
{
	Student s;
	s.getdata();
	s.showdata();
	return 0;
}
