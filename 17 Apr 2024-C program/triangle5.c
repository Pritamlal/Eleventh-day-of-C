#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%d",i+j);
		}
		printf("\n");
	}
}
