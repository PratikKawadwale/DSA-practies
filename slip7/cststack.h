//Write a program that checks whether a string of characters is palindrome or not. The function should use a stack library (cststack.h) of stack of characters using a static implementation of the stack.
#include<stdio.h>
#define MAX 15
struct stack
{
   char data[MAX];
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
int isempty()
{
   if(s.top==-1)
      return 1;
   else
      return 0;
}
void push(char ch)
{
   if(isfull())
   {
     printf("stack is overflow");
   }
   else
     {
        s.top++;
        s.data[s.top]=ch;
     }
}
char pop()
{
     char c;
     if(isempty())
       printf("stack is underflow");
     else
      {
          c=s.data[s.top];
          s.top--;
          return c;
      }
}
