#include<stdio.h>
void main()
{
int i,ser,lim,flag=0,count=0;
count=2;
printf("enter the limit\n");
scanf("%d",&lim);
count++;
int a[lim];
printf("enter the values of array\n");
for(i=0;i<lim;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
printf("enter the number to be searched\n");
scanf("%d",&ser);
count++;
for(i=0;i<lim;i++)
{
count++;
if(ser==a[i])
{
count++;
flag++;
count++;
printf("the number %d is foumd\n ",ser);
count++;
break;
}
count++;
}
count++;
if(flag==0)
{
count++;
printf("the number %d is not found\n",ser);
count++;
}
count++;
count++;
count++;
printf("time complexity=%d\n",count);
printf("space complexity=%d",20+(4*lim));
}



