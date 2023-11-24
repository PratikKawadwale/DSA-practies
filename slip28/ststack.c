#include"ststack.h"
int main()
{
  int ch ,num,val;
  init();
  do
  {
     printf("\n1-push\n2-pop\n3-disp");
     printf("\nEnter choice");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:printf("Enter number");
                      scanf("%d",&num);
                      push(num);
                      break;
         case 2:val=pop();
                       break;
         case 3:disp();
                      break;
     }
  }while(ch<4);
}
