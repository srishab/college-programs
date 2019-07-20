#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x-6*x-7)

int main()
{
    float a,b,c,temp=99999;
    printf("Enter a");
    scanf("%f",&a);
    printf("Enter b");
    scanf("%f",&b);
    
    if(f(a)*f(b)>0)
    {
    	printf("check the inputs");
	}
	else
	{
	    if(f(a)*f(b)==0)
        {
            if(f(a)==0)
                printf("%f is the root",a);
            else
                printf("%f is the root",b);
        }
        else
		{
			do
			{
				temp=c;
				c=(a*f(b)-b*f(a))/(f(b)-f(a));
				if(f(a)*f(c)<0)
				{
					b=c;
				}
				else
				{
					a=c;
				}
			}while(fabs(temp-c)>0.0001);
        	
		}
		
	}
	printf("%f",c);
	return 0;
}

