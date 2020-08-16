#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
float fun(float);
void main()
{
    float result=1,a,b,sum,h;
    int i,j,n;
    printf("\n Enter the range - ");
    printf("\n Lower Limit a - ");
    scanf("%f",&a);
    printf("\n Upper limit b - ");
    scanf("%f",&b);
    printf("\n\n Enter number of subintervals - ");
    scanf("%d",&n);
    h=(b-a)/n;
    sum=fun(a)+4*fun(a+h)+fun(b);
    for(i=3;i<n;i+=2)
    {          sum+=2*fun(a+(i-1)*h)+4*fun(a+i*h);         }
    result=sum*h/3;
    printf("\n\nValue of integral is %6.4f\t",result);
    getch();}
float fun(float x)
  {     float temp;
         temp=1/(1+(x*x));
         return temp;
}
