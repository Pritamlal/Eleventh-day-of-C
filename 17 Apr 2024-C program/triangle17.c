#include<stdio.h>
int main()
{
	int i,j,N,value;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		value=1+i;
		for(j=3;j<=i;j++)
		{
			printf("%d ",value);
			value++;
		}
		
		for(j=(i*2)-1;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
