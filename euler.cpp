#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x,y) (x*x*x+y)

int main()
{
  	float xn,h,y=1,i=0,y1=0;
    printf("Enter the value of xn");
    scanf("%f",&xn);
    printf("Enter the value of h");
    scanf("%f",&h);
    while(i<=xn)
    {
    	y1=y+(h*f(i,y));
    	y=y1;
    	i+=h;
	}
	printf("%f",y);
	return 0;
}

