#include<stdio.h>
#include<math.h>
#include<conio.h>
#define EPS 0.00005
#define F(x) (x*x*x + 1)/2
#define f(x) x*x*x - 2*x + 1
void ITER();
void main ()
{
    clrscr();
    printf("\n\t Solution by ITERATION method - ");
    printf("\n\t Equation is - ");
    printf("\n\t\t\t\t X*X*X - 2*X + 1 = 0\n");
    ITER();
    getch();
}
void ITER()
{
     float x1,x2,x0,f0,f1,f2,error;
     int i=0,n;
     for(x1=1;;x1++)
     {        f1=F(x1);
               if (f1>0)
                    break;
     }
      for(x0=x1-1;;x0--)
     {         f0=f(x0);
                if(f0<0)
                        break;    
      }
      x2=(x0+x1)/2;
      printf("Enter the number of iterations:- ");
      scanf("%d",&n);
      printf("\n\t\t The 1 approximation to the root is:- %f",x2);
     for(;i<n-1;i++)
       {       f2=F(x2);
                printf("\n\t\t The %d approximation to the root is:- %f",i+2,f2);
                x2=F(x2);
                error=fabs(f2-f1);
                if(error<EPS)
                break;
                f1=f2;
        }
       if(error>EPS)
       printf("\n\n\t NOTE:- The number of iterations are not sufficient.");
       printf("\n\n\n\t\t\t------------------------------");
       printf("\n\t\t\t The root is %.4f",f2);
       printf("\n\t\t\t-----------------------------");
}
