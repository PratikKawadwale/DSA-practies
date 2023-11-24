#include"singlylist.h"
int main()
{
  int ch,num,pos;
  node *list=NULL;
  do
  {
      printf("\n1-create\n2-deletebeg\n3-deletemid\n4-deleteend\n5-display");
      printf("\nEnter choice");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:list=create(list);
                      break;
          case 2:list=deletebeg(list);
                       break;
          case 3:printf("Enter position");
                        scanf("%d",&pos);
                        list=deletemid(list,pos);
                        break;
         case 4:list=deleteend(list);
                       break;
         case 5:disp(list);
                       break;
      }
  }while(ch<6);
}
