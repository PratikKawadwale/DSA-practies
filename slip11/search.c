//Q1. Read the data from file 'cities.txt' containing names of cities and their STD codes. Accept a name of the city from user and use sentinel linear search algorithm to check whether the name is present in the file and output the STD code, otherwise output “city not in the list”.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int flag=0,scode;
   char cname[20],s1[20];
   FILE *fp1;
   
   fp1=fopen("cities.txt","r");
   if(fp1==NULL)
   {
      printf("file not found");
      exit(0);
   }
   printf("Enter city name to search");
   scanf("%s",&s1);
   while(!feof(fp1))
   {
      fscanf(fp1,"%s%d",&cname,&scode);
      if(strcmp(cname,s1)==0)
      {
        flag=1;
        break;
      }
   }
   if(flag==1)
   printf("city faund stdcode%d",scode);
   else
     printf("city not in the list");
     fclose(fp1);
     
}
