#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
double abs_err, rel_err, p_rel_err, t_val, a_val;
printf(“\n INPUT TRUE VALUE:”);
scanf(“%lf”, &t_val);
printf(“\n INPUT APPROXIMATE VALUE:”);
scanf(“%lf”, &a_val);
abs_err=fabs(t_val-a_val);
rel_err=abs_err/t_val;
p_rel_err=rel_err*100;
printf(“\nABSOLUTE ERROR= %lf”, abs_err);
printf(“\nRELATIVE ERROR= %lf”, rel_err);
printf(“\nPERCENTAGE RELATIVE ERROR= %lf”, p_rel_err);
getch();
}
