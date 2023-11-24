#include"stqueue.h"
int main()
{
  int ch,num,val;
  init();
  do
  {
       printf("\n1-addq\n2-deleteq\n3-peek");
       printf("\nEnter choice");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("Enter number");
                        scanf("%d",&num);
                       addq(num);
                       break;
            case 2:deleteq();
                         break;
            case 3:peek();
                         break;
       }
    }while(ch<4);
}
