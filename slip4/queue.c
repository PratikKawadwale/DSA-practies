//Write a program to reverse the elements of a queue using queue library. Implement basic queue operations init, enqueue, dequeue.
#include<stdio.h>
#define MAX 10
struct queue
{
    int data[MAX];
    int front,rear;
}q;
void init()
{
   q.front=q.rear=-1;
}
int isempty()
{
     if(q.front==-1 ||q.front>q.rear)
       return 1;
      else
        return 0;
}
int isfull()
{
   if(q.rear==MAX-1)
     return 1;
   else
      return 0;
}
void enqueue(int num)
{
   if(isfull())
     printf("queue is overflow");
   else
   {
        if(q.front==-1)
         q.front=0;
        
            q.rear++;
            q.data[q.rear]=num;
      
   }
}
void dequeue()
{
  int val;
  if(isempty())
   printf("queue is underflow");
  else
  {
     val=q.data[q.front];
     q.front++;
  }
  printf("deleted value=%d",val);
}
int reverse()
{
   int temp;
   for(temp=q.rear;temp>=q.front;temp--)
   {
     printf("%d\t",q.data[temp]);
   }
}
int main()
{
   int num,ch;
   init();
   do
   {
       printf("\n1-enqueue\n2-dequeue\n3-reverse");
       printf("\nEnter choice");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("Enter number");
                        scanf("%d",&num);
                        enqueue(num);
                        break;
          case 2:dequeue( );
                        break;
          case 3:reverse();
                        break;
       }
   }while(ch<4);
}
