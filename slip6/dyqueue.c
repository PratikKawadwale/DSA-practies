#include"dyqueue.h"
int main()
{
  int ch,num,val;
  init();
  do
  {
     printf("\n1-enqueue\n2-dequeue\n3-peek");
     printf("\nEnter choice");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:printf("\nEnter number");
                     scanf("%d",&num);
                     enqueue(num);
                     break;
         case 2:dequeue();
                        break;
          case 3:peek();
                       break;
     }
  }while(ch<4);
}
