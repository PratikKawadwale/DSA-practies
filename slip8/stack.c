//Write a C program to check whether the contents of two stacks are identical. Use stack library to perform basic stack operations. Neither stack should be changed.
#include<stdio.h>
#define MAX 5
struct stack
{
  int data[MAX];
  int top;
}s1,s2;
void init(struct stack *s)
{
   s->top=-1;
}
int isempty(struct stack *s)
{
    if(s->top==-1)
      return 1;
     else
        return 0;
}
int isfull(struct stack *s)
{
   if(s->top==MAX-1)
      return 1;
   else
      return 0;
}
void push(struct stack *s,int val)
{
  if(isfull(s))
  printf("stack is overflow");
  else
    {
        s->top++;
        s->data[s->top]=val;
    }
}
int pop(struct stack *s)
{
  int val;
  if(isempty(s))
    printf("stack is underflow");
    else
       {
           val=s->data[s->top];
           s->top--;
       }return val;
}
int main()
{
    int n,i,val;
    init(&s1);
    init(&s2);
    printf("Enter limit");
    scanf("%d",&n);
    printf("Enter values in stack 1");
    for(i=0;i<n;i++)
    {
       printf("Enter value");
       scanf("%d",&val);
       push(&s1,val);
    }
    printf("Enter value in stack 2");
    for(i=0;i<n;i++)
    {
      printf("Enter value");
      scanf("%d",&val);
      push(&s2,val);
    }
    while(!isempty(&s1)&& !isempty(&s2))
    {
       if(pop(&s1)!=pop(&s2))
       break;
    }
    if((isempty(&s1))&&(isempty(&s2)))
        printf("identical");
    else
        printf("not identical");
}
