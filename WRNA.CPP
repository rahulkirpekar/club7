// Declration par / signature / prototype

void main()
{
	float ans;
	clrscr();

	ans = addFun();

	printf("\nAddition : %d",ans);

	getch();
}
float addFun()
{
	float no1,no2,ans;
	printf("\nEnter No1 : ");
	scanf("%f",&no1);
	printf("\nEnter No2 : ");
	scanf("%f",&no2);

	ans = no1+no2;

	return ans;
}