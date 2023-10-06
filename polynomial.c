#include<stdio.h>
void main()
{
int lim,i;
struct poly
{
int coef;
int expo;
};
printf("enter the number of terms in polynomial\n");
scanf("%d",&lim);
struct poly a[lim];
for(i=0;i<lim;i++)
{
printf("enter the coefficient of %d term=",i+1);
scanf("%d",&a[i].coef);
printf("enter the exponent of %d term=",i+1); 
scanf("%d",&a[i].expo);  
}
printf("the polynomial is:\n");
for(i=0;i<lim;i++)
{
printf("%dx^%d",a[i].coef,a[i].expo);
if(i<(lim-1))
{
printf("+");
}
}
printf("\n");
}
