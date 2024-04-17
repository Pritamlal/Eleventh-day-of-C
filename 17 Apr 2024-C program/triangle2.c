#include<stdio.h>
int main()
{
	int i,j,N;
	printf("ENter the number::");
	scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		for(j=N;j>=(N-i)+1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
