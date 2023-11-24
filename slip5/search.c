//. Create a random array of n integers. Accept a value x from user and use linear search algorithm to check whether the number is present in the array or not and output the position if the number is present.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int search(int a[10],int num,int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       if(a[i]==num)
       {
          return i;
        
       }
   }
   return i;
 
   
}
int main()
{
  int a[10],n,i,num;
printf("Enter limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     a[i]=rand()%100;
  }
  printf("random no=");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("Enter number to serach");
  scanf("%d",&num);
  if(search(a,num,n,pos)==n)
  printf("number is not faund");
  else
  {
    printf("number is faund");
    
  }
}

