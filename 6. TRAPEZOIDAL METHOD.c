# include <stdio.h>
# include <math.h>
# include <string.h>
float fun(float);
void main()
{
       float result=1, a,b, h,sum;
       int i,j,n;         clrscr();
       printf("\n\n Enter the range - ");
       printf("\n\n Lower Limit a - ");
       scanf("%f" ,&a);
       printf("\n\n Upper Limit b - ");
       scanf("%f" ,&b);
       printf("\n\n Enter number of subintervals - ");
        scanf("%d" ,&n);
       h=(b-a)/n;
       sum=fun(a)+fun(b);
       for(i=1;i<n;i++)
       {        sum+=2*fun(a+i);         }
       result=sum*h/2;
       printf("n\n\n\n Value of the integral is %6.4f\t",result);
       getch();
}
float fun(float x)
{     float temp;
       temp = 1/(1+(x*x));
return temp;
}
