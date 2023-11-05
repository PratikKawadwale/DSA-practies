//Q2. Write a program that sorts the elements of linked list using any of sorting technique
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node*)malloc(sizeof(struct node));
typedef struct node
{
   int data;
   struct node *next;
}Node;
Node *create(Node *list)
{
      int i,n;
      Node *newnode,*temp;
      printf("Enter limit");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          newnode=NODEALLOC;
          printf("Enter value");
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
                temp=newnode;
          }
      }return list;
}
void disp(Node *list)
{
   Node *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
       printf("%d\t",temp->data);
   }
}
Node *sort(Node *list)
{
   int t;
   Node *i,*j;
   for(i=list;i!=NULL;i=i->next)
   {
       for(j=list;j!=i;j=j->next)
       {
           if(i->data<j->data)
           {
            t=i->data;
            i->data=j->data;
            j->data=t;
           }
       }
   }return list;
}
int main()
{
   int ch;
   Node *list=NULL;
   do{
         printf("\n1-create\n2-disp\n3-sort");
         printf("\nEnter choice");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:list=create(list);
                         break;
             case 2:disp(list);
                          break;
              case 3:list=sort(list);
                           disp(list);
                           break;
         }
   }while(ch<4);
}
