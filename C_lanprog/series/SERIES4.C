//series no.4 -1,3,8,18

void main()
{
	int ans=1 , r=1,d=1 ,n ,i;

	clrscr();

	printf("enter your desired val for n(limit):\n");
	scanf("%d",&n);

	for(i=1 ; i<=n ; i++)
	{
		printf("\t%d\t",ans);
		d+=r;
		ans+=d;
		r+=2;
	}
	getch();
}