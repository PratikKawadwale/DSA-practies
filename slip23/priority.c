#include"priority.h"
int main()
{
   int ch,num;
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
          case 2:if(!isempty())
                        printf("the remove element is %d",removeq());
                        else
                         printf("underflow");
                          break;
           case 3:printf("the last element is %d",peek());
                        break;
      }
   }while(ch<4);
}
