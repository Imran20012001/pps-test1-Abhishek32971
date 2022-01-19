/*#include <stdio.h>
int input()
{
  int a;
  printf("enter the size of array1");
  scanf("%d",a);
  fflush;
  char str1[a]
  printf("enter the string")
}*/
#include<stdio.h>
#include<string.h>
//void main()
//{
//    char a,b;
  //  char name[8]="abhishek";    
int main()  
{  
   char str1[20];    
   char str2[20];    
   int value;
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  
   if(str1>str2)
   printf("%s is greater than %s",str1,str2);
   else if(str1==str2)
   printf("%s is equal to %s",str1,str2);
   else
   printf("%s is less than %s",str1,str2);
   /*for(i=0;;i++)
   {
       if(str)
   }*/
