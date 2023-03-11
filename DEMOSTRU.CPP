#include<iostream.h>
#include<conio.h>
class Student
{
// private - "within class"
// scope---default scope---[private]----[private protected public]
	//class Object-->scope--->
			//   class Properties = 1) Data Members + 2) Member Function
private:
	// 1) Data Member --- private
	int rno;
	char name[50];
	int std;
public:
	// 2) Member Function--public
	void scan()
	{
		cout<<"\nEnter Rno : ";
		cin>>rno;
		cout<<"\nEnter Name : ";
		cin>>name;
		cout<<"\nEnter Std : ";
		cin>>std;
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
};
void main()
{
	Student s[5];// class variable--->"object"
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
		s[i].scan();
	}

	for(i=0;i<5;i++)
	{
		s[i].disp();
	}
	getch();
}




