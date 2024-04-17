#include<stdio.h>
int main()
{
	int i,j,N,colcount=1,value=1;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=colcount;j++)
		{
			if(value==10)
			value=1;
			printf("%d ",value);
			value++;
		}
		printf("\n");
		colcount*=2;
	}
}
