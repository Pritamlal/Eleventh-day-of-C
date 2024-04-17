#include<stdio.h>
int main()
{
	int i,j,diff,value,N;
	printf("Enter the value::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		diff=N-1;
		value=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",value);
			value=value+diff;
			diff--;
		}
		printf("\n");
	}
}
