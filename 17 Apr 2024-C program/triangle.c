#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the N value::");
	scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		for(j=N;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
