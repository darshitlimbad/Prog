#include <stdio.h>
#include <conio.h>


void main()
{
	int i,j,n;
	clrscr();

	for(i=5 ; i>=1 ; i--)
	{

		for(j=1 ; j<=i ; j++)
		{
			printf(" %d ",j);
		}
		for(j=4 ; j>=i ; j--)
		{
			printf(" - ");
		}

		for(j=3 ; j>=i ; j--)
		{
			printf(" - ");
		}
		for(j=i ; j>=1 ; j--)
		{
			if(j==5)
				continue;

			printf(" %d ",j);
		}

		printf("\n");
	}
	for(i=2 ; i<=5 ; i++)
	{

		for(j=1 ; j<=i ; j++)
		{
			printf(" %d ",j);
		}
		for(j=i ; j<=4 ; j++)
		{
			printf(" - ");
		}

		for(j=i+1 ; j<=4 ; j++)
		{
			printf(" - ");
		}
		for(j=i ; j>=1 ; j--)
		{
			if(j==5)
				continue;

			printf(" %d ",j);
		}
		printf("\n");
	}


	getch();

}