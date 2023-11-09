//Sort a random array of n integers (accept the value of n from user) in ascending order by using insertion sort algorithm.
#include<stdio.h>

void accept(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
}
void display(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);
   }
}
void insertion(int a[],int n)
{
  int i,j,key;
 for(i=0;i<n;i++)
    {
         key=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(key<a[j])
            {
               a[j+1]=a[j];
            }
            else
            {
              break;
            } 
        }
            a[j+1]=key;
    }
}
int main( )
{
    int i,n,num,a[100];
    printf("Enter limit");
    scanf("%d",&n);
    printf("Enter n number");
    accept(a,n);
    insertion(a,n);
    printf("\nsorted nos=");
    display(a,n);

}
