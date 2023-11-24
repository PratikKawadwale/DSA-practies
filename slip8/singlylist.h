//Implement a list library (singlylist.h) for a singly linked list of integer With the operations create, delete specific element and display. Write a menu driven program to call these operations
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node*)malloc(sizeof(struct node))
typedef struct node
{
    int data;
    struct node *next;
}node;
node *create(node *list)
{
   int i,n;
   node *newnode,*temp;
   printf("Enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      newnode=NODEALLOC;
      printf("Enter number");
      scanf("%d",&newnode->data);
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
node *deletebeg(node *list)
{
   node *temp;
   temp=list;
   list=list->next;
   free(temp);
   return list;
}
node *deletemid(node *list,int pos)
{
    int i;
    node *temp,*temp1;
    for(i=1,temp=list;temp->next!=NULL && i<pos-1;temp=temp->next,i++);
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
    return list;
}
node *deleteend(node *list)
{
    node *temp,*temp1;
    for(temp=list;temp->next->next!=NULL;temp=temp->next);
    temp1=temp->next;
    temp->next=NULL;
    free(temp1);
    return list;
}
node *disp(node *list)
{
  node *temp;
  for(temp=list;temp!=NULL;temp=temp->next)
  {
     printf("%d\t",temp->data);
  }
}
