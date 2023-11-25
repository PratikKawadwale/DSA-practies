// a) Read the data from the ‘employee.txt’ file and sort on age using Merge sort/ Quick sortand write the sorted data to another file 'sortedemponage.txt'.
#include<stdio.h>
#include<stdlib.h>
typedef struct employee
{
char name[30];
int age;
float salary;
}record;
void accept(record *p,int k)
{
int i=0;
FILE *fp;
fp=fopen("emp.txt","r");
while(fscanf(fp,"%s%d%f",p[i].name,&p[i].age,&p[i].salary)!=EOF)
{
i++;
}
fclose(fp);
}
void display(record *p,int k)
{int i=0;
FILE *fp;
fp=fopen("emp.txt","r");
while(fscanf(fp,"%s%d%f",p[i].name,&p[i].age,&p[i].salary)!=EOF)
{
printf("%s\t%d\t%f\n",p[i].name,p[i].age,p[i].salary);
i++;
}
fclose(fp);
}
void merge(record *p,int l,int m,int r)
{
int i,j,k;
int n1=m-l+1;
int n2=r-m;
record L[n1],R[n2];
for (i =0;i<n1;i++)
L[i]=p[l+i];
for (j=0;j<n2;j++)
R[j]=p[m+1+j];
i=0;
j=0;
k=l;
while(i<n1 && j<n2)
{
if (L[i].age<=R[j].age)
{
p[k]=L[i];
i++;
}
else
{
p[k]=R[j];
j++;
}
k++;
}
while (i<n1)
{
p[k]=L[i];
i++;
k++;
}
while (j<n2)
{
p[k]=R[j];
j++;
k++;
}
}
void mergesort(record *p,int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(p,low,mid);
mergesort(p,mid+1,high);
merge(p,low,mid,high);
}
}
void insertfile(record *p,int k)
{
int i=0;
FILE *fp;
fp=fopen("sortedemponage.txt","w");
for(i=0;i<k;i++)
{
printf("%s %d %f\n",p[i].name,p[i].age,p[i].salary);
fprintf(fp,"%s %d %f\n",p[i].name,p[i].age,p[i].salary);
}
fclose(fp);
}
int main()
{
record *p=NULL,temp;
int a[100],n,k=0;
FILE *fp;
fp=fopen("emp.txt","r");
while(fscanf(fp,"%s%d%f",temp.name,&temp.age,&temp.salary)!=EOF)
{
k++;
}
printf("No of records %d\n",k);
p=(record *)malloc(sizeof(record)*k);
accept(p,k);
printf("Before Sorting\n");
display(p,k);
printf("After sorting\n");
mergesort(p,0,k-1);
insertfile(p,k);
return 0;
}
