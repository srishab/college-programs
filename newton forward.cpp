#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
	int f=1;
	for(int x=1;x<=n;x++)
	{
		f*=x;
	}
	return f;
}
int main()
{
	float x,u,sum=0,c,p,rel,o,temp;
	int i,j,n,f;
	printf("enter the number of value");
	scanf("%d",&n);
	float a[n][n+1]={0};
	printf("Enter the vlaue of x to be find");
	scanf("%f",&x);
	printf("Enter the values of 1st col");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i][0]);
	}
	printf("Enter the values of 2nd col");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i][1]);
	}
	for(i=2;i<n;i++)
	{
		for(j=0;j<n-i+1+1;j++)
		{
			a[j][i]=a[j+1][i-1]-a[j][i-1];	
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("  %f",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	u=(x-a[0][0])/(a[1][0]-a[0][0]);
	o=1;
	sum=0;
	for(i=1;i<=n;i++)
	{
		f=fact(i-1);
		c=o/f;
		temp=c*a[0][i];
		sum+=temp;
		o=o*(u);
		u=u-1;
	}
	printf("	\n%f",sum);
	return 0;	
}
