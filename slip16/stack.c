//A postfix expression of the formab+cd-*ab/ is to be evaluated afteraccepting the values of a, b, c and d. The value should be accepted only once and the same value is to be used for repeated occurrence of same symbol in the expression. Formulate the problem and write a C program to solve the problem  by using stack
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 20
struct stack
{
     int data[MAX];
     int top;
}s;
void init()
{
    s.top=-1;
}
int isempty()
{
     if(s.top==-1)
       return 1;
     else
       return 0;
}
int isfull()
{
     if(s.top==MAX-1)
        return 1;
     else
       return 0;
}
int push(char ch)
{
    if(isfull())
      printf("stack is overflow");
    else
    {
       s.top++;
       s.data[s.top]=ch;
    }
}
int pop( )
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
int main()
{
    char s1[20];
    int i,a,b,c,d,result,val1,val2;
    printf("Enter expression in postfix");
    gets(s1);
    printf("Enter value of abcd");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    init();
    for(i=0;s1[i]!='\0';i++)
    {
       if(isalpha(s1[i]))
       {
          switch(s1[i])
          {
             case 'a':push(a);
                            break;
             case 'b':push(b);
                            break;
              case 'c':push(c);
                            break;
              case 'd':push(d);
                            break;              
          }
       }
       else
       {
           val1=pop();
           val2=pop();
           switch(s1[i])
           {
                case '+':result=val2+val1;
                                 break;
                case'-':result=val2-val1;
                               break;
                case'*':result=val2*val1;
                              break;
                case'/':result=val2/val1;
                              break;
           }
           push(result);
       }
    }printf("\n result=%d",pop());
    }
