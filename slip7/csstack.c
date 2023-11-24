#include"cststack.h"
int main()
{
   char s[10];
   int i;
   init();
   printf("Enter string");
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
       push(s[i]);
   }
   for(i=0;s[i]!='\0';i++)
   {
      if(s[i]!=pop())
      break;
   }
   if(isempty())
     printf("stack is palindrom");
   else
      printf("stack is not palindrom");
}
