#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x-6*x-7)
#define f1(x) (2*x-6)
int main()
{
	float a,b=0,temp=99999;
	int flag=0;
    printf("Enter a");
    scanf("%f",&a);
    if(f(a)==0)
    {
    	printf("%f is the root ",a);
	}
    else
	{	
		do
	 	{
	 		temp=b;
     		b=a-(f(a)/f1(a));
     		a=b;
			if(f1(a)==0)
			{
				flag=1;
			
				break;	
			} 	
	 	}while(fabs(temp-b)>0.00001);
		
	}
     
	 
	 if(flag==1)
	 {
	 	printf("the root is %f",a);
	 }
	 else
	 {
	 	printf("the root is %f",b);
	 }
	return 0;
}
