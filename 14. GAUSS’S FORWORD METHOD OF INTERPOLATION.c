# include <stdio.h>
# include <math.h>
# include <string.h>
void main()
{
  int n,I,j;
  float ax[10],ay[10],x,nr,dr,y=0,h,p,diff[20][20],y1,y2,y3,y4;
  printf(" Enter the number of terms - ");
  scanf("%d",&n);
  printf("\n Enter the value in the form of x - ");
  for (i=0;i<n;i++)
  {
     printf(" Enter the value of x%d - ",i+1);
     scanf("%f",&ax[i]);
  }
  printf(" Enter the value in the form of y - ");
  for(i=0;i<n;i++)
  {
    printf("Enter the value of y%d - ",i+1);
    scanf("%f",&ay[i]);
  }
  printf("\nEnter the value of x for - ");
  printf("\nwhich you want the value of y - ");
  scanf ("%f",&x);
  h=ax[1]-ax[0];
  for(i=0;i<n-1;i++)
  {       diff[i][1]=ay[i+1]-ay[i];         }
  for(j=2;j<=4;j++)
   {
       for(i=0;i<n-j;i++)
        {      diff[i][j]=diff[i+1][j-1]-diff[i][j-1];       }
   }
  i=0;
  do {
             i++;
  }while(ax[i]<x);
  i--;
  p=(x-ax[i])/h;
  y1=p*diff[i][1];
  y2=p*(p-1)*diff[i-1][2]/2;
  y3=(p+1)*p*(p-1)*diff[i-2][3]/6;
  y4=(p+1)*p*(p-1)*(p-2)*diff[i-3][4]/24;
  y=ay[i]+y1+y2+y3+y4;
  printf("\nwhen x=%6.4f,y=%6.8f ",x,y);
  getch();
}
