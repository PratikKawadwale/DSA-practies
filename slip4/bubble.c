//Read the ‘n’ numbers from user and sort using bubble sort.
#include<stdio.h>
int main()
{
   int i,n,a[100],t,pass;
   printf("Enter limit:");
   scanf("%d",&n);
   printf("Enter number");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(pass=1;pass<n;pass++)
   {
      for(i=0;i<n-pass;i++)
      {
           if(a[i]>a[i+1])
           {
              t=a[i];
              a[i]=a[i+1];
              a[i+1]=t;
           }
      }
   }
   printf("sorted array");
   for(i=0;i<n;i++)
   {
   printf("%d\t",a[i]);
   }
}
