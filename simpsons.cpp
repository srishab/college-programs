#include<stdio.h>
#include<conio.h>
#define f(x) (1/(1+x))
int main()
{
	float h,a,b,sum=0,p=0,l=0;
	int n;
	printf("Enter lower and upper limit");
	scanf("%f %f",&a,&b);
	printf("Enter the number of div");
	scanf("%d",&n);
	if(n%2==0)
	{
			h=(b-a)/n;
			sum=f(a)+f(b);
				for(int x=1;x<=n-1;x++)
				{	
					if(x%2==0)
					{
						p=p+f(a+(x*h));
					}
					else
					{
						l=l+f(a+(x*h));
					}
				}
			sum=(h/3)*(sum+(4*l)+(2*p));
			printf("%f",sum);
	}
	else
	{
		printf("Not Possible check the inputs");
	}

	return 0;
}
