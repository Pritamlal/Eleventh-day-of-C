#include<stdio.h>
int main()
{
	int i,j,k,N;
	printf("Enter the N value::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		k=(2*i)-1;
		for(j=i;j<=N;j++,k+=2)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
}
