#include"dstqueue.h"
int main()
{
    int num ,ch,val;
    DQueue q;
    initDQueue(&q);
    do
    {
       printf("\n1-insert r \n2-insert f\n3-Delete r\n4-delete f");
       printf("Enter choice");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("Enter number");
                        scanf("%d",&num);
                        insertDQueueAtRear(&q,num);
                        break;
           case 2:printf("Enter number");
                        scanf("%d",&num);
                        insertDQueueAtFront(&q,num);
                        break;             
           case 3:printf("\n Deleted value=%d",deleteDQueueAtfront(&q));
                        break;
            case 4:printf("\n Deleted value=%d",deleteDQueueAtRear(&q));
                        break;            
       }
    }while(ch<5);
}
