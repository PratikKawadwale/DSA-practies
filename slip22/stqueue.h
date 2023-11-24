//Implement a linear queue library (st_queue.h) of integers using a static implementation of the queue and implementing the operations like init (Q), AddQueue(Q, x) and X=DeleteQueue(Q). Write a program that includes queue library and calls different queue operations.
#include<stdio.h>
#define MAX 15
struct queue
{
   int data[MAX];
   int front,rear;
}q;
void init()
{
   q.front=q.rear=-1;
}
int isfull()
{
   if(q.rear==MAX-1)
     return 1;
   else
      return 0;
}
int isempty()
{
   if(q.front==-1 || q.rear<q.front)
     return 1;
   else
      return 0;
}
int addq(int num)
{
    if(isfull())
    {
        printf("queue is overflow");
    }
    else
    {
       if(q.front==-1)
       {
       q.front=0;
        }
           
       q.rear++;
       q.data[q.rear]=num;
      printf("insert succ..");
    }
}
int deleteq( )
{
  int val;
    if(isempty())
    {
        printf("queue is underflow");
    }
    else
    {
       val=q.data[q.front];
       q.front++;
    }
    printf("Deleted value=%d",val);
}
int peek()
{ 
         int val;
    q.data[q.front+1]=val;
  
     printf("peeked value %d",val);
}
