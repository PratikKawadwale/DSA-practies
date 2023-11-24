#include"cirqueue.h"
int main()
{
  int num,ch;
  init();
  do
  {
     printf("\n1-addq\n2-delq\n3-disp");
     printf("\nEnter choice");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:printf("Enter number");
                     scanf("%d",&num);
                     addq(num);
                     break;
      case 2:delq();
                  break;
       case 3:disp();
                    break;
     }
  }while(ch<4);
}
