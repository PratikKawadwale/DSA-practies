//There are lists where new elements are always appended at the end of the list. The list can be implemented as a circular list with the external pointer pointing to the last element of the list. Implement singly linked circular list of integers with append and display operations. The operation append(L, n), appends to the end of the list, n integers either accepted from user or randomly generated.
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node*)malloc(sizeof(struct node))
typedef struct node
{
   int data;
   struct node *next;
}Node;
Node *create(Node *list)
{
  int i,n;
  Node *temp,*newnode;
  printf("Enter limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
     newnode=NODEALLOC;
     printf("Enter number");
     scanf("%d",&newnode->data);
      if(list==NULL)
      {
         list=temp=newnode;
         newnode->next=list;
      }
      else
      {
           newnode->next=list;
         temp->next=newnode;
      temp=newnode;
      }
   }return list;
}
void disp(Node *list)
{
     Node *temp=list;
     do
     {
        printf("%d\t",temp->data);
        temp=temp->next;
     }while(temp!=list);
}
Node *append(Node *list,int num)
{
     Node *newnode,*temp;
     newnode=NODEALLOC;
     newnode->data=num;
     newnode->next=NULL;
     if(list==NULL)
     {
        return newnode;
     }
     else
     {
      for(temp=list;temp->next!=list;temp=temp->next);
        temp->next=newnode;
       newnode->next=list;
     } return list;
}
int main()
{
   int ch,num;
   Node *list=NULL;
   do
   {
        printf("'\n1-create\n2-disp\n3-append");
        printf("\nEnter choice");
        scanf("%d",&ch);
        switch(ch)
         {
            case 1:list=create(list);
                        break;
            case 2:disp(list);
                         break;
            case 3:printf("Enter number");
                          scanf("%d",&num);
                         list=append(list,num);
                         break;
         }
   }while(ch<4);
}
