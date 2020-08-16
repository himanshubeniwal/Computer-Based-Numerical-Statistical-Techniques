#include<stdio.h>
#include<math.h>
#include<process.h>
void main()
{
  int n,I,j;
  float ax[10],h,p,x,y ,y1,y2,y3,y4;;
  float diff[20][20];
  printf("\n Enter the value of terms");
  scanf("%d",%n);
  printf(”\n Enter the values for x \n”);
  for(i=0;i<n;i++)
   {      printf("\n Enter the value for x%d-",i+1);
           scanf("%f”,&ax[i]);
   }
  printf("\n Enter the values for y \n");
  for(i=0;i<n;i++)
    {    printf("\n Enter the value for y%d-",i+1);
          scanf("%f",&ay[i]);
    }
  printf("\n Enter the value of x for");
  printf("\n which you want the value of y");
  scanf("%f",&x);
  h=ax[1]-ax[0];
  for(i=0;i<n-1;i++)
   {        diff[i][1]=ay[i+1]-ay[i];       }
  for(j=2;j<=4;j++)
   {       for(i=0;i<n-j;i++)
            {        diff[i][j]=diff[i+1][j-1]-diff[i][j-1];        }
  }
  i=0;
  do {   i++;
  }while(ax[i]<x);
  i--;
  p=(x-ax[i])/h;
  y1=p*(diff[i][1]+diff[i-1][1])/2;
  y2=p*p*diff[i-1][2]/2;
  y3=p*(p*p-1)*(diff[i-1][3]+diff[i-2][3])/6;
  y4=p*p*(p*p-1)*diff[i-2][4]/24;
  y=ay[i]+y1+y2+y3+y4;
  printf("\n\n When x=%6.2f, y=%6.8f",x,y);
  getch();
}
