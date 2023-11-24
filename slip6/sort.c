//Sort a random array of n integers (accept the value of n from user) in ascending order by using selection sort algorithm.
#include<stdio.h>
int main()
{
   int a[100],i,n,min,index,t,j;
   printf("Enter limit");
   scanf("%d",&n);
   printf("Enter n number");
   for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      min=a[i];
      index=i;
      for(j=i+1;j<n;j++)
      {
           if(a[j]<min)
           {
                  min=a[j];
                  index=j;
           }
      }
      t=a[i];
      a[i]=a[index];
      a[index]=t;
   }
   printf("\nsorted no");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   }
}
