#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==N||j==1||i==j)
			{
				printf("1 ");
			}
			else
			printf("0 ");
		}
		printf("\n");
	}
}
