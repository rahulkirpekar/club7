#include<iostream.h>
#include<conio.h>
void main()
{
	int a[20],i,j,k=2,flag=1;
	clrscr();
	// a[0],a[1],a[2],a[3],a[4]
	for(i=0;i<20;)
	{
		// k = 2,3,4,5,6,7,8,9,10,11,12,13,14
		flag=1;
		for(j=2;j<k;j++)
		{
			if(k%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			a[i] = k;
			i++;
		}
		k++;
	}
	for(i=0;i<20;i++)
	{
		cout<<"\nA["<<i<<"] : "<<a[i];
	}
	getch();
}
