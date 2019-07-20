#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a[1000],b[1000],x,num,den,calc;
	int i,j,n;
	printf("enter the number of value");
	scanf("%d",&n);
	printf("Enter the vlaue of x to be find");
	scanf("%f",&x);
	printf("Enter the values of array x");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("Enter the values of array y");
	for(j=0;j<n;j++)
	{
		scanf("%f",&b[j]);
	}
	calc=0;
	for(i=0;i<n;i++)
	{
		num=1;
		den=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				num*=(x-a[j]);
				den*=(a[i]-a[j]);
			}
		}
		calc+=(num/den)*b[i];
	}
	printf("%f",calc);
	return 0;	
}
