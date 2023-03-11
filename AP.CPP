#include<iostream.h>
#include<conio.h>
void main()
{

	int a[5],i,no,dup,temp,revno=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter A["<<i<<"] : ";
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		revno=0;
	//     a[0] = 123
		dup = no = a[i];// 123

	     //     123 > 0
	     //      12 > 0
	     //       1 > 0
	     //       0 > 0
		while(no > 0)
		{
			//3    123%10
		       // 2     12%10
		       // 1      1%10
			temp = no%10;
			//3      (0 * 10) + 3
			//32      (3 * 10 ) + 2
			//321       (32 * 10) + 1
			revno = (revno*10) + temp;

		      //12     123/10
		      //1      12 / 10
		      //0       1 / 10
			no = no/10;
		}
		if(dup==revno)
		{
			cout<<"\nA["<<i<<"] : "<<a[i];
		}
	}
	getch();
}

