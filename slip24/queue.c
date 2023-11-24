//Implement a circular queue library (cir_queue.h) of integers using a dynamic (circular linked list) implementation of the queue and implementing the operations like init (Q), AddQueue(Q, x) and isEmpty (Q). Write a menu driven program that includes queue library and calls different queue operations.
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
void disp()
{
   temp=front;
   do
   {
       printf("%d\t",temp->data);
       temp=temp->next;
       
   }while(temp!=front);
}
int main()
{
  int num,ch;
  init();
  do
  {
     printf("\n1-addq\n2-disp");
     printf("\nEnter choice");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:printf("Enter number");
                     scanf("%d",&num);
                     addq(num);
                     break;
        case 2:disp();
                    break;
       
     }
  }while(ch<3);
}
