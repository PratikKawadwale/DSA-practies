//Sort a random array of n integers (accept the value of n from user) in ascending order by using recursive Counting sort algorithm.
#include<stdio.h>
void countingsort(int a[],int k,int n)
{
   int i,c[20]={0},b[20];
   for(i=0;i<n;i++)
     c[a[i]]+=1;
     for(i=1;i<=k;i++)
        c[i]=c[i]+c[i-1];
        for(i=n-1;i>=0;i--)
        {
                b[c[a[i]]-1]=a[i];
                c[a[i]]-=1;
        }
        printf("the sorted outputis:\n");
        for(i=0;i<n;i++)
          printf("%d\t",b[i]);
}
int main()
{
   int a[20],i,k,n;
   printf("\nEnter limit");
   scanf("%d",&n);
   printf("\nEnter the range");
   scanf("%d",&k);
   printf("\nEnter number");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   countingsort(a,k,n);
   return 0;
}
