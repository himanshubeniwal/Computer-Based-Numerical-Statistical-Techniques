#include<stdio.h>
#include<conio.h>
float fun(int);
void main()
{       int n,a,b,i;
         float h, sum=0, result;
         printf("enter range");
         scanf("%d",&n);
         printf("enter lower limit");
         scanf("%d",&a);
         printf("enter upper limit");
         scanf("%d",&b);
         h=(b-a)/n;
         sum=fun(a)+fun(b);
         for(i=0;i<n;i++)
          {    if (i%2==0)
                    sum+=2*fun(a+i*h);
                else
                    sum+=3*fun(a+i*h);
           }
           result=sum*3/8*h;
           printf("%f", result);
           getch();
 }
float fun(int x)
{       float val;
         val=1/(1+(x*x));
         return(val);
 }
