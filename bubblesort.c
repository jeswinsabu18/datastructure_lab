#include<stdio.h>
void main()
{
int i,j,temp,lim,count=0;
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
printf("sorted array\n");
for(i=0;i<lim-1;i++)
{
count++;
for(j=i+1;j<lim;j++)
{
count++;
if(a[i]>a[j])
{
count++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
count+=3;
}
count++;
}
count++;
}
count++;
for(i=0;i<lim;i++)
{
count++;
printf("%d  ",a[i]);
count++;
}
printf("\n");
count+=3;
printf("time complexity=%d\n",count);
printf("space complexity=%d",20+(4*lim));
}



