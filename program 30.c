#include<stdio.h>
void main()
{
	int a[5],b[4],i,j,c;
	printf("Enter the value of array:");
	{
		for(i=0;i<=4;i++)
		for(j=0;j<=3;j++)
		{
			scanf("%d,%d",&a[i],b[j]);
		}
		printf("Array element:");
		for(i=0;i<=4;i++)
		for(j=0;j<=3;j++)
		c=a[i]+b[j];
		printf("Addition %d,c");
	}
}
