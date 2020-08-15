# include <stdio.h>
# include <conio.h>
# include <math.h>
# include <process.h>
# include <string.h>
# define f(x) 3*x -cos(x)-1
# define df(x) 3+sin(x)
void NEW_RAP();
void main()
{   clrscr();
   printf ("\n Solution by NEWTON RAPHSON method \n");
   printf ("\n Equation is: ");
   printf ("\n\t\t\t 3*X - COS X - 1=0 \n\n ");
   NEW_RAP();
   getch();
}
void NEW_RAP()
{   long float x1,x0, df0,f0,f1;
   int i=1,itr;
   float EPS,error;
   for(x1=0;;x1 +=0.01)
       {          f1=f(x1);        
          if (f1 > 0)
           {         break;            }
        }
       x0=x1-0.01;
       f0=f(x0);
        printf(" Enter the number of iterations: ");
        scanf(" %d",&itr);
        printf(" Enter the maximum possible error: ");
        scanf("%f",&EPS);
        if (fabs(f0) > f1)
               {          printf("\n\t\t The root is near to %.4f\n",x1);            }
        if(f1 > fabs(f(x0)))
               {          printf("\n\t\t The root is near to %.4f\n",x0);            }
        x0=(x0+x1)/2;
        for(;i<=itr;i++)
               {                           f0=f(x0);
                           df0=df(x0);
                           x1=x0 - (f0/df0);
                           printf("\n\t\t The %d approximation to the root is:%f",i,x1);
                           error=fabs(x1-x0);
                           if(error<EPS)
                                {              break;               }
                           x0 = x1;
                 }
        if(error>EPS)
              {              printf("\n\n\t NOTE:- ");
                              printf("The number of iterations are not sufficient.");
               }
       printf("\n\n\n\t\t\t ------------------------------");
       printf("\n\t\t\t The root is %.4f ",x1);
       printf("\n\t\t\t ------------------------------");			}
