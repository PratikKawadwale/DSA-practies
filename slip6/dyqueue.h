//Implement a queue library (dyqueue.h) of integers using a dynamic (linked list) implementation of the queue and implement init, enqueue, dequeue, isempty, peek operations.
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
}*front,*rear,*newnode;
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
void enqueue(int num )
{  
    struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=NULL;
   if(front==NULL)
    front=rear=newnode;
    else
 {
      rear->next=newnode;
      rear=newnode;
   }
}
void  dequeue()
{
  int val;
  if(isempty())
    printf("queue is underflow");
 else
    {
       val=front->data;
       newnode=front;
       front=front->next;
       free(newnode);
       printf("deleted value=%d",val);
    }
}
void peek()
{
   int val;
   val=rear->data;
   printf("peeked value=%d",val);
   }

