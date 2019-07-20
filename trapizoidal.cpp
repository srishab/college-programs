#include<stdio.h>
#include<conio.h>
#define f(x) (1/(1+x))
int main()
{
	float h,a,b,n,sum=0,p=0;
	printf("Enter lower and upper limit");
	scanf("%f %f",&a,&b);
	printf("Enter the number of div");
	scanf("%f",&n);
	h=(b-a)/n;
	sum=f(a)+f(b);
	for(int x=1;x<=n-1;x++)
	{	
		p=p+f(a+(x*h));
	}
	sum=(h/2)*(sum+(2*p));
	printf("%f",sum);
	return 0;
}
