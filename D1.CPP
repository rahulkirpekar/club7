#include<iostream.h>// cout,cin
#include<conio.h>

void main()
{
	// 1) Declare Variable
	float no1,no2,ans;
	clrscr();

	cout<<"\nEnter Two Nos : ";
	cin>>no1>>no2;
	//scanf("%d%d",&no1,&no2);


	// 2) initialise Variable
	// << - Insertion Operator
/*	cout<<"\nEnter No1 : ";

	// Console InputStream
	// >> - Extration Operator
	cin>>no1;
	cout<<"\nEnter No2 : ";
	cin>>no2; */


	// cout--Console OutputStream
	// << -- Insertion operator
	cout<<"\nNo1 : "<<no1<<"\n"<<"No2 : "<<no2;

    /*	cout<<"\nNo1 : ";
	cout<<no1;
	cout<<"\n";
	cout<<"No2 : ";
	cout<<no2;

     */
	//printf("\nNo1 : %d",no1);

	// 3) operation
	// = Compound Assignment Operator
	ans = no1 + no2;

	cout<<"\nAddition : "<<ans;


	ans = no1 - no2;

	cout<<"\nSubtraction : "<<ans;


	ans = no1 * no2;

	cout<<"\nMultiply : "<<ans;

	ans = no1 / no2;

	cout<<"\nDivision : "<<ans;




	//printf("\nAddition : %d",ans);




	getch();
}

