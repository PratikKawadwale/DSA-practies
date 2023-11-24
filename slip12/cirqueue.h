//.Implement a circular queue library (cir_queue.h) of integers using a dynamic (circular linked list) implementation of the queue and implementing init(Q), AddQueue(Q) and DeleteQueue(Q) operations. Write a menu driven program that includes queue library and calls different queue operations.
#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node *next;
}*front,*rear,*newnode,*temp;
void init()
{
   front=rear=NULL;
}
int isempty()
{
   if(front==NULL)
     return 1;
  else
   return 0;
}
int addq(int num)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    
    if(isempty())
    {
       front=rear=newnode;
       rear->next=front;
    }
    else
    {
      rear->next=newnode;
      rear=newnode;
      rear->next=front;
      printf("Insert succ..");
    }
}
void delq()
{
   int val;
   if(isempty())
   {
      printf("queue is underflow");
   }
   else
   {
       temp=front;
       val=front->data;
       if(front->next==front)
       {
          free(front);
       }
       else
       {
          front=front->next;
          rear->next=front;
          free(temp);
       }
   }
}
void disp()
{
   temp=front;
   do
   {
       printf("%d\t",temp->data);
       temp=temp->next;
       
   }while(temp!=front);
}
