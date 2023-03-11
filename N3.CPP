int add(int no1,int no2)
{
	return (no1+no2);
}
void main()
{
	int no1,no2,ans;
	clrscr();
	printf("\nEnter No1 : ");
	scanf("%d",&no1);
	printf("\nEnter No2 : ");
	scanf("%d",&no2);

	ans = add(no1,no2);

	printf("\nAddition : %d",ans);

	getch();
}