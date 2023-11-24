//Write a program that copies the contents of one stack into another. Use stack library to perform basic stack operations. The order of two stacks must be identical.(Hint: Use a temporary stack to preserve the order).
#include<stdio.h>
#define MAX 10
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
void push(struct stack,int num )
{   
     
     if(isfull())
       printf("stack is overflow");
     else
     {
        s.top++;
        s.data[s.top]=num;
     }
}
void disp()
{
   int i;
   for(i=s.top;i>=0;i--)
   {
      printf("%d\n",s.data[i]);
   }
}
int main()
{
    int  i, n,num;
    struct stack s1,s2,temp;
    init(s1);
     init(s2);
      init(temp);
      printf("Enter limit of stack");
      scanf("%d",&n);
      for(i=0;i<n;i++)
     {
          printf("Enter number:");
          scanf("%d",&num);
          push(s1,num);
      }
      for(i=s1.top;i>=0;i--)
      {
         push(temp,s1.data[i]);
      }
      for(i=temp.top;i>=0;i--)
      {
        push(s2,temp.data[i]);
      }
      printf("display orignal stack");
      disp(s1);
      printf("display copy stack");
      disp(s2);
}	
