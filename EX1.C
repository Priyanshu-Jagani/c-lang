#include<stdio.h>
#include<conio.h>

void main()
{
	int n, i, sum=0;
	clrscr();

	printf("\nEnter any number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("\nSum of %d is %d ",n,sum);
	getch();
}