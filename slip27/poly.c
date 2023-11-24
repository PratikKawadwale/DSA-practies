//Write a program that adds two single variable polynomials. Each polynomial should be represented as a list with linked list implementation
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
   int coeff;
   int expo;
   struct node *next;
}Node;
#define NODEALLOC (Node *)malloc(sizeof(Node))
Node *create(Node *list)
{
    Node *newnode,*temp;
    int i,n;
    printf("Enter limit of poly");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
      newnode=NODEALLOC;
      printf("Enter coeff:");
      scanf("%d",&newnode->coeff);
      newnode->expo=i;
      newnode->next=NULL;
      if(list==NULL)
      {
         list=temp=newnode;
      }
      else
      {
         temp->next=newnode;
         temp=newnode;
      }
    }return list;
}
void disp(Node *list)
{
   Node *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
      printf("%dx^%d+",temp->coeff,temp->expo);
   }
   printf("\b");
}
int main()
{
   Node *list=NULL;
   list=create(list);
   disp(list);
}
