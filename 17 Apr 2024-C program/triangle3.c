#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		for(j=1;j<=(N-i)+1;j++)
		{
			printf("%d",(i+j)-1);
		}
		printf("\n");
	}
}
