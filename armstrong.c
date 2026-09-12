#include<stdio.h>
int Check_Armstrong(int *p){
	int i,k,num,numm,j,mul,sum=0,c=0;
	for(i=*p;i;i=i/10)
	{
		num=i;
		numm=i;
		for(;numm;numm=numm/10)
			c++;
		for(;num;num=num/10)
		{
			k=num%10;
			for(mul=1,j=1;j<=c;j++)
				mul=mul*k;
			sum=sum+mul;
		}
		if(sum==*p)
			return 1;
		else
			return 0;
	}
}
void armstrong_Range(int n1,int n2){
	int p,i,k,num,numm,j,mul,sum=0,c=0;
	for(p=n1;p<=n2;p++)
	{
		for(i=p;i;i=i/10)
		{
			num=i;
			numm=i;
			for(c=0;numm;numm=numm/10)
				c++;
			for(sum=0;num;num=num/10)
			{
				k=num%10;
				for(mul=1,j=1;j<=c;j++)
					mul=mul*k;
				sum=sum+mul;
			}
			if(sum==p)
				printf("%d ",sum);
		}
	}
	printf("\n");
}
int armstrong_Count(int *n1,int *n2){
	int p,i,k,c1=0,num,numm,j,mul,sum=0,c=0;
	for(p=*n1;p<=*n2;p++)
	{
		for(i=p;i;i=i/10)
		{
			num=i;
			numm=i;
			for(c=0;numm;numm=numm/10)
				c++;
			for(sum=0;num;num=num/10)
			{
				k=num%10;
				for(mul=1,j=1;j<=c;j++)
					mul=mul*k;
				sum=sum+mul;
			}
			if(sum==p)
				c1++;
		}
	}
	return c1;
}
