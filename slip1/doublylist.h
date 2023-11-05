//Q1.Implement a list library (doublylist.h) for a doubly linked list of integerswith the create, display operations. Write a menu driven program to callthese operations.
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
     int data;
     struct node *next,*prev;
}Node;
Node *create(Node *list)
{    
      Node *newnode,*temp;
      int n,i;
     printf("Enter limit");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       newnode=(Node*)malloc(sizeof(Node));
     printf("Enter number");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(list==NULL)
     {
        list=newnode;
        temp=newnode;
     }
     else
     {
          temp->next=newnode;
          newnode->prev=temp;
          temp=newnode;
      }
     }
     return(list);
}
void disp(Node *list)
{
    Node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
         printf("%d\t",temp->data);
    }
}
