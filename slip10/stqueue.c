#include"stqueue.h"
int main()
{
  int ch,num;
  init();
  do
  {
       printf("\n1-addq\n2-peek");
       printf("Enter choice");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("Enter number");
                        scanf("%d",&num);
                       addq(num);
                       break;
            case 2:peek();
                         break;
       }
    }while(ch<3);
}
