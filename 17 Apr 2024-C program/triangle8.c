#include<stdio.h>
int main()
{
	int i,j,k,N;
	printf("ENter the number::");
	scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		k=i;
		for(j=1;j<=i;j++,k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
