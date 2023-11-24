#include"ststack.h"
int main()
{
  int ch ,num;
  init();
  do
  {
     printf("\n1-push\n2-peek");
     printf("\nEnter choice");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:printf("Enter number");
                      scanf("%d",&num);
                      push(num);
                      break;
         case 2:peek();
                      break;
     }
  }while(ch<3);
}
