#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,max;
	clrscr();
	printf("enter two num:");
	scanf("%d",&n1);
	scanf("%d",&n2);

	max=(n1 > n2) ? n1 : n2 ;

	while(1)
	{
		if((max%n1==0) && (max%n2==0))
		{
			printf("L.C.M of %d & %d is : %d",n1,n2,max);
			break;
		}
		++max;
	}
}