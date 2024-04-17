#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the N value::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i&1)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",j);
			}
		}
		else
		{
			for(j=i;j>=1;j--)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
