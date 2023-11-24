//Write a program that reverses a string of characters. The function should use a stack library(cststack.h). Use a static implementation of the stack.
#include<stdio.h>
#define MAX 10
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
void push(char c)
{
    if(isfull())
    {
       printf("stack is full dont push");
    }
    else
    {
      s.top++;
      s.data[s.top]=c;
    }
}
void disp()
{
   int i;
   for(i=s.top;i>=0;i--)
   {
       printf("%c\t",s.data[i]);
   }
}
int main()
{
  char s[20];
  int i;
  init();
  printf("Enter string");
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
     push(s[i]);
  }
  printf("\nRevers string");
  disp();
}
