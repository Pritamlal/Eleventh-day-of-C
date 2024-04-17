#include<stdio.h>
int main()
{
	int i,j,N,k=1;
	printf("Enter the numebr::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<(2*i);j++)
		{
			printf("%d",k++);
		}
		printf("\n");
		k=1;
	}
}
