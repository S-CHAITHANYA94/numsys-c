#include <stdio.h>
int Check_Prime (int  *p )
{
	int i;
	for(i=2;i<*p;i++)
		if(*p%i==0)
			break;
	if(*p==i)
		return 1;
	else 
		return 0;
}
void prime_Range(int n1 ,int n2 ){
	int i,j;
	for(j=n1;j<=n2;j++)
	{
		for(i=2;i<j;i++)
		{
			if(j%i==0)
				break;
		}
		if(j==i)
			printf("%d ",j);
	}
	printf("\n");
}
int prime_Count(int *n1 ,int *n2 ){
	int i,j,c=0;
	for(j=*n1;j<=*n2;j++)
	{
		for(i=2;i<j;i++)
		{
			if(j%i==0)
				break;
		}
		if(j==i)
			c++;
	}
	return c;
}
