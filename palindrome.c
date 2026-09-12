#include<stdio.h>
int Check_Palindrome(int *p){
	int i,rev=0,r;
	for(i=*p;i;i=i/10)
	{
		r=i%10;
		rev=rev*10+r;
	}
	if(rev==*p)
		return 1;
	else
		return 0;
}
void palindrome_Range(int n1,int n2){
	int i,rev=0,r,j;
	for(j=n1;j<=n2;j++)
	{
		for(rev=0,i=j;i;i=i/10)
		{
			r=i%10;
			rev=rev*10+r;
		}
		if(rev==j)
			printf("%d ",j);
	}
	printf("\n");
}
int palindrome_Count(int *n1,int *n2){
	int i,rev=0,r,c=0,j;
	for(j=*n1;j<=*n2;j++)
	{
		for(rev=0,i=j;i;i=i/10)
		{
			r=i%10;
			rev=rev*10+r;
		}
		if(rev==j)
			c++;
	}
	return c;
}
