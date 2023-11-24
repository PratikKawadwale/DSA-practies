//There are lists where insertion should ensure the ordering of data elements. Since the elements are in ascending order the search can terminate once equal or greater element is found. Implement a doubly linked list of ordered integers (ascending/descending) with insert, search and display operations.
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node*)malloc(sizeof(struct node))
typedef struct node
{
  int data;
  struct node *next,*prev;
}node;
node *create(node *list)
{
   int i,n;
   node *temp,*newnode;
   printf("Enter limit");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     newnode=NODEALLOC;
     printf("Enter number");
     scanf("%d",&newnode->data);
     if(list== NULL)
     {
         temp=list=newnode;
     }
     else
     {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
     }
   }return list;
}
void disp(node *list)
{
  node *temp;
  for(temp=list;temp!=NULL;temp =temp->next)
  {
      printf("%d\t",temp->data);
  }
}
node *insertbeg(node *list,int num)
{
    node *newnode;
    newnode=NODEALLOC;
    newnode->data=num;
    newnode->next=list;
    list->prev=newnode;
    list=newnode;
    return list;
}
node *insertmid(node *list, int num,int pos)
{
    int i;
   node *temp,*newnode;
   newnode=NODEALLOC;
   newnode->data=num;
   for(i=1,temp=list;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
   newnode->next=temp->next;
   temp->next->prev=newnode;
   temp->next=newnode;
   newnode->prev=temp;
   return list;
}
node *insertend(node*list,int num)
{
    node *temp,*newnode;
    newnode=NODEALLOC;
    newnode->data=num;
    for(temp=list;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    newnode->prev=temp;
    return list;
}
node *search(node *list,int num)
{
     node *temp;
     for(temp=list;temp!=NULL;temp=temp->next)
     {
         if(temp->data==num)
         {
               return temp;
         }
    }return temp;
}
int main()
{
   int ch,num,pos;
   node *list=NULL;
   do
   {
      printf("\n1-create\n2-disp\n3-insertbeg\n4-insertmid\n5-insertend\n6-search");
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
                         list=insertbeg(list,num);
                         break;
             case 4:printf("Enter pos");
                          scanf("%d",&pos);
                          printf("Enter number");
                         scanf("%d",&num);
                         list=insertmid(list,num,pos);
                         break;
             case 5:printf("Enter number");
                         scanf("%d",&num);
                         list=insertend(list,num);
                         break;       
             case 6:printf("Enter number");
                         scanf("%d",&num);
                         if(search(list,num)!=NULL)
                        {
                             printf("no is faund:");
                              }
                       else
                       {
                           printf("no is not faund");
                        }
                        break;            
      }
   }while(ch<7);
}
