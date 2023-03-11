#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
public:
	int rno;
	char name[15];
	int std;
	// Default Constructor
	Student()
	{
		cout<<"\nSTART :: Default Constructor --- "<<this;
		rno=1;
		strcpy(name,"rahul");
		std=12;
		cout<<"\nEXIT :: Default Constructor";
	}
};
void main()
{
	clrscr();
	cout<<"\nSTART :: Main method";
	Student s1,s2,s3;// rno name std

	cout<<"\nFirst Object : ";
	cout<<"\n\tRno : "<<s1.rno;//
	cout<<"\n\tName : "<<s1.name;//
	cout<<"\n\tStd : "<<s1.std;//

	cout<<"\nSecond Object : ";

	cout<<"\n\tRno : "<<s1.rno;//
	cout<<"\n\tName : "<<s1.name;//
	cout<<"\n\tStd : "<<s1.std;//

	cout<<"\nThird Object : ";

	cout<<"\n\tRno : "<<s3.rno;//
	cout<<"\n\tName : "<<s3.name;//
	cout<<"\n\tStd : "<<s3.std;//



	cout<<"\nEXIT :: Main method";
	getch();
}
