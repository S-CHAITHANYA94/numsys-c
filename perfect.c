#include <stdio.h>
int Check_Perfect(int *p)
{
	int i,j,sum=0;
	for(i=1;i<(*p);i++)
	{
		if(*p%i==0)
			sum=sum+i;
	}
	if(sum==*p)
		return 1;
	else
		return 0;
}
void perfect_Range(int n1,int n2)
{
	int i,j,sum=0;
	for(j=n1;j<=n2;j++)
	{
		for(sum=0,i=1;i<j;i++)
		{
			if(j%i==0)
				sum=sum+i;
		}
		if(j==sum)
			printf("%d ",j);
	}
	printf("\n");
}
int perfect_Count(int*n1, int*n2){
	int i,j,c=0,sum;
	for(j=*n1;j<=*n2;j++)
	{
		for(sum=0,i=1;i<j;i++)
		{
			if(j%i==0)
				sum=sum+i;
		}
		if(j==sum)
			c++;
	}
	return c;
}
