//Write a program that sorts the elements of linked list using bubble sort technique.
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node *)malloc(sizeof(struct node)) 
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
 void disp(node *list)
 {
    node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
       printf("%d\t",temp->data);
    }
 }
 node *insertbeg(node *list,int num)
 {
    node *newnode,*temp;
    newnode=NODEALLOC;
    newnode->data=num;
    newnode->next=list;
    list=newnode;
    return list;
 }
 node *insertmid(node *list,int num,int pos)
 {
    int i;
    node *newnode,*temp;
    
    for(i=0,temp=list;i<pos-1 && temp!=NULL;i++,temp=temp->next);
    newnode=NODEALLOC;
    newnode->data=num;
     newnode->next=temp->next;
     temp->next=newnode;
     return list;
 }
 node *insertend(node *list,int num)
 {
    node *newnode,*temp;   
    for(temp=list;temp->next!=NULL;temp=temp->next);
    newnode=NODEALLOC;
    newnode->data=num;
    temp->next=newnode;
    return list;
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
   for(i=0,temp=list;i<pos-1 && temp->next!=NULL;i++,temp);
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
node *search(node *list)
{
    int t;
   node *i,*j;
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
   int ch,num,pos;
   node *list=NULL;
   do
   {
      printf("\n1-create\n2-disp\n3-insertbeg\n4-insertmid\n5-insertend\n6-deletebeg\n7-deletemid\n8-deleteend\n9-search");
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
         case 6:list=deletebeg(list);
                       break;
         case 7:printf("Enter pos");
                       scanf("%d",&pos);
                      list=deletemid(list,pos);
                       break;              
         case 8:list=deleteend(list);
                       break;              
          case 9:list=search(list);
                        break;
      }
   }while(ch<10);
}
