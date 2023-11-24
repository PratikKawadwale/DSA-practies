//.Implement a stack library (ststack.h) of integers using a static implementation of the stack and implementing the operations like init(S), S=push(S), and X=peek(S). Write a driver program that includes stack library and calls different stack operations.
#include<stdio.h>
#define MAX 15
struct stack
{
   int data[MAX];
   int top;
}s;
void init()
{
   s.top=-1;
}
int isfull()
{
   if(s.top==MAX-1)
     return 1;
   else
     return 0;
}
void push(int num)
{
    if(isfull())
    {
       printf("stack is overflow");
    }
    else
    {
       s.top++;
       s.data[s.top]=num;
    }
}
int peek()
{
    
     printf("peeked value=%d",s.data[s.top]);
  
}
