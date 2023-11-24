//Implement a priority queue library (PriorityQ.h) of integers using a static implementation of the queue and implementing the below two operations. Write a driver program that includes queue library and calls different queue operations. 1) Add an element with its priority into the queue. 2) Delete an element from queue according to its priority.
#include<stdio.h>
#define MAX 20
struct queue
{
    int data[MAX];
    int front,rear;
}q;
void init()
{
  q.front=q.rear=-1;
}
int addq(int num)
{
      int i;
      for(i=q.rear;i>q.front;i--)
      if(num>q.data[i])
         q.data[i+1]=q.data[i];
      else
         break;
         q.data[i+1]=num;
         q.rear++;
}
int removeq()
{
   int num;
   q.front++;
   num=q.data[q.front];
   return(num);
}
int peek()
{
    return q.data[q.front+1];
}
int isempty()
{
   return(q.front == q.rear);
}
int isfull()
{
  return(q.rear == MAX-1);
}
