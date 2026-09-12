#include<stdio.h>
int Check_Strong(int *p)
{
	int i,num,j,mul,sum=0;
	for(i=*p;i;i=i/10)
	{
		num=i%10;
		for(mul=1,j=1;j<=num;j++)
			mul=mul*j;
		sum=sum+mul;
	}
	if(sum==*p)
		return 1;
	else
		return 0;
}
void strong_Range(int n1,int n2){
	int i,k,num,j,mul,sum=0;
	for(k=n1;k<=n2;k++)
	{
		for(i=k,sum=0;i;i=i/10)
		{
			num=i%10;
			for(mul=1,j=1;j<=num;j++)
				mul=mul*j;
			sum=sum+mul;
		}
		if(sum==k)
			printf("%d ",sum);
	}
}
int strong_Count(int*n1, int*n2){
	int i,num,j,k,mul,sum=0,c=0;
	for(k=*n1;k<=*n2;k++)
	{
		for(sum=0,i=k;i;i=i/10)
		{
			num=i%10;
			for(mul=1,j=1;j<=num;j++)
				mul=mul*j;
			sum=sum+mul;
		}
		if(sum==k)
			c++;
	}
	return c;
}
