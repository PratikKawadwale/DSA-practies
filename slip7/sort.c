//Sort a random array of n integers (accept the value of n from user) in ascending order by using quick sort algorithm.
#include<stdio.h>
void swap(int *a,int *b)
{
   int t=*a;
   *a=*b;
   *b=t;
}
int partition(int a[],int low,int high)
{ 
    int j,i,pivot;
     pivot=a[high];
     i=(low-1);
    for(j=low;j<=high-1;j++)
    {
        if(a[j]<pivot)
        {
          i++;
          swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}
void quicksort(int a[ ],int low,int high)
{ 
  if(low<high)
  {
     int pi=partition(a,low,high);
     quicksort(a,low,pi-1);
     quicksort(a,pi+1,high);
  }
}
void printarry(int a[],int size)
{
   int i;
   for(i=1;i<=size;i++)
   printf("%d\t",a[i]);
   printf("\n");
}
int main()
{
   int a[10],i,n;
   printf("Enter limit");
   scanf("%d",&n);
   printf("Enter n number");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   quicksort(a,0,n);
   printf("\nsorted array\n");
   printarry(a,n);
   return 0;
}
