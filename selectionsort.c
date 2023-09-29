#include<stdio.h>
void main()
{
int i,j,lim,min,temp,count=0;
count++;
printf("enter the limit\n");
scanf("%d",&lim);
count++;
int a[lim];
printf("enter the array\n");
for(i=0;i<lim;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
for(i=0;i<lim-1;i++)
{
count++;
min=i;
count++;
for(j=i+1;j<lim;j++)
{
count++;
if(a[j]<a[min])
{
count++;
min=j;
count++;
}
count++;
}
count++;
temp=a[i];
a[i]=a[min];
a[min]=temp;
count+=3;
}
count++;
printf("sorted array:");
for(i=0;i<lim;i++)
{
count++;
printf("%d ",a[i]);
count++;
}
printf("\n");
count=count+3;
printf("time complexity =%d\n",count);
printf("space complexity=%d\n",24+(4*lim));
}
