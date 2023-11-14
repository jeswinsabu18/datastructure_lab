#include<stdio.h>
#include<stdlib.h>
void main(){
int no1,no2,i,coef1,expo1;
struct node{
int coef,expo;
struct node *link;
}*rhead=NULL,*phead=NULL,*qhead=NULL,*r,*p,*q,*temp,*p1,*q1;
printf("enter the number of elements in polynomial 1\n");
scanf("%d",&no1);
printf("enter the number of elements in polynomial 2\n");
scanf("%d",&no2);
printf("enter the elements of 1st poly in decending order\n");
for(i=0;i<no1;i++)
{
   printf("enter the coef of %d term",i+1);
   scanf("%d",&coef1);
   printf("enter the expo of %d term",i+1);
   scanf("%d",&expo1);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->coef=coef1;
   temp->expo=expo1;
   temp->link=NULL;
   if(phead==NULL){
     phead=temp;
     p1=temp;
    }
  else{
     p1->link=temp;
     p1=temp;
     }
 }
 printf("first polynomial:");
 p=phead;
 while(p!=NULL)
 {
 printf("%dX^%d+",p->coef,p->expo);
 p=p->link;
 }
 }
  printf("enter the elements of 2nd poly in decending order\n");
for(i=0;i<no1;i++)
{
   printf("enter the coef of %d term",i+1);
   scanf("%d",&coef1);
   printf("enter the expo of %d term",i+1);
   scanf("%d",&expo1);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->coef=coef1;
   temp->expo=expo1;
   temp->link=NULL;
   if(qhead==NULL){
     qhead=temp;
     q1=temp;
    }
  else{
     q1->link=temp;
     q1=temp;
     }
 }   
p=phead;
q=qhead;
