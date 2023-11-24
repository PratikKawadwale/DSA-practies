//Implement a linear queue library (dyqueue.h) of integers using a dynamic (circular linked list) implementation of the queue and implementing the five queue operations (init(Q), AddQueue(Q, x), X=DeleteQueue(Q), X=peek(Q), isEmpty(Q)). Write a program to reverse the elements of a queue using queue library.
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
void reverse()
{
   struct node *next;
   temp=front;
   struct node *prev=NULL;
   do
   {
      next=temp->next;
      temp->next=prev;
      prev=temp;
      temp=next;
   }while(temp!=front);
   front->next=prev;
   front=prev;
}
int main()
{
  int num,ch;
  init();
  do
  {
     printf("\n1-addq\n2-delq\n3-disp\n4-reverse");
     printf("\nEnter choice");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:printf("Enter number");
                     scanf("%d",&num);
                     addq(num);
                     break;
      case 2:delq();
                  break;
       case 3:disp();
                    break;
        case 4:reverse();
                     break;
     }
  }while(ch<5);
}
