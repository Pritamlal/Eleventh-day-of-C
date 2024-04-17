#include<stdio.h>
int main()
{
	int i,j,N,diff,value=1;
	printf("Enter the number::");
	scanf("%d",&N);
		diff=1;
		value=1;
	for(i=1;i<=N;i++)
	{
	for(j=1;j<=i;j++)
		{
			printf("%d ",value);
			value+=diff;
			diff++;
		}
		printf("\n");
		
	}
}
