#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char c;
	clrscr();
	fp = fopen("club7.txt","r");

	while( (c = fgetc(fp)) != EOF)
	{
		printf("%c",c);
	}

	/*while(fscanf(fp,"%s",buff) != EOF)
	{
		printf("%s ",buff);
	}*/

	fclose(fp);
	getch();
}