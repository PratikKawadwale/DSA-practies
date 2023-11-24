//Implement a list library (singlylist.h) for a singly linked list. Create a linked list, reverse it and display reversed linked list.
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}node;
node *create(node *list)
{
   node *newnode,*temp;
   int i,n;
   printf("Enter limit");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("Enter number");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if(list==NULL)
       {
          temp=list=newnode;
       }
       else
       {
          temp->next=newnode;
          temp=newnode;
       }       
    }return list;
} 
void reverse(node *list)
{
        int cnt=0,i;
        node *temp;
        for(temp=list;temp!=NULL;temp=temp->next)
        {
                cnt++;
        }
        while(cnt>0)
        {
                for(i=1,temp=list;i<cnt;i++)
                {
                        temp=temp->next;
                }
                printf("%d\t",temp->data);
                cnt--;
        }
}
void disp(node *list)
{
   node *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   { 
      printf("%d\t",temp->data);
   }
}
int main()
{
  int ch;
  node *list=NULL;
do
  {
      printf("\n1-create\n2-reverse\n3-disp");
      printf("\nEnter choice");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:list=create(list);
                      break;
         case 2:reverse(list);                     					
                       break;
          case 3:disp(list);
                        break;
      }
  }while(ch<4);
}
