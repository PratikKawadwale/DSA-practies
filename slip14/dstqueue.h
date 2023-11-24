//A doubly ended queue allows additions and deletions from both the ends that is front and rear. Initially additions from the front will not be possible. To avoid this situation, the array can be treated as if it were circular. Implement a queue library (dstqueue.h) of integers using a static implementation of the circular queue and implementing the following operations. a. isFull(Q) b. addFront(Q) c. getRear(Q) d. deleteR
#include<stdio.h>
#define MAX 10
typedef struct {
  int front;
  int rear;
  int caunt;
  int data[MAX];
}DQueue;
void initDQueue(DQueue *q)
{
     q->front=0;
     q->rear=-1;
     q->caunt=0;
}
int isfull(DQueue *q)
{
   int full=0;
   if(q->caunt == MAX)
       full=1;
       return full;
}
int isempty(DQueue *q)
{
   int empty=0;
   if(q->caunt==0)
    empty=1;
    return empty;
}
void insertDQueueAtRear(DQueue *q,int num)
{
      if(isfull(q))
      {
         printf("\nqueue is overflow");
         return;
      }
      else
      {
          q->rear=(q->rear+1)%MAX;
          q->data[q->rear]=num;
          
          q->caunt++;
          printf("\nAfter insert at rear front:%d,REAR:%d",q->front,q->rear);
          printf("\n insert num:%d\n",num);
      }
}
int ddatateDQueueAtfront(DQueue *q)
{
    int val;
    if(isempty(q))
    {
        printf("Queue is underflow ");
        return -1;
    }
    else
    {
         val=q->data[q->front];
         q->front=(q->front+1)%MAX;
         q->caunt--;
          printf("\nAfter ddatate at Front front:%d,REAR:%d",q->front,q->rear);         
        return val;
    }
}
void insertDQueueAtFront(DQueue *q,int num)
{
      if(isfull(q))
      {
         printf("\nqueue is overflow");
         return;
      }
      else
      {
          if(q->front==0)
          q->front=MAX-1;
          else
          {
             q->front=q->front-1;
             q->data[q->front]=num;
             q->caunt++;
              printf("\nAfter insert at Front front:%d,REAR:%d",q->front,q->rear);
              printf("\n insert num:%d\n",num);
          }
        }
}
int ddatateDQueueAtRear(DQueue *q)
{
    int val;
    if(isempty(q))
    {
        printf("Queue is underflow ");
        return -1;
    }
    else
    {
         val=q->data[q->rear];
        if(q->rear==0)
        q->rear=MAX-1;
        else
        q->rear=q->rear-1;
          printf("\nAfter ddatate at rear front:%d,REAR:%d",q->front,q->rear);         
        q->caunt--;
        return val;
    }
}

