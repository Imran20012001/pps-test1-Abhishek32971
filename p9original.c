/*#include <stdio.h>
int input()
{
  int a;
  printf("enter the size of array1");
  scanf("%d",a);
  fflush;
  char str1[a]
  printf("enter the string")
}
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
    // You can't compare two strings, you have to compare each character of bith strings. Got it?yes. okay.thanks.  */
#include<stdio.h>
#include<string.h>
char input()  
{    
   char a[10];
   printf("Enter the first string : ");  
   scanf("%c",a);   
   return a[10];
}
void strcmpa(char a,char b)
{
  int sum1=0,t;
  for(int i=0;i<=10;i++)
  {
    t=a[i];
    sum1=sum1+t;
  }
  int sum2=0,y;
  for(int j=0;j<=10;j++)
  {
    y=("%d",b[j]);
    sum2=sum2+y;
  }
  if(sum1>sum2)
  printf("%s is greater than %s",a,b);
  else if(sum2>sum1)
  printf("%s is greater than %s",a,b);
}
void main()
{
  char a,b;
  a=input();
  b=input();
  strcmpa(a,b);
}   
  
/*error message
 error: subscripted value is neither array nor pointer nor vector
     t=a[i];
        ^
error: subscripted value is neither array nor pointer nor vector
     y=("%d",b[j]);
              ^
        */


/*
 See you are not able to understand the question only.
 The question is compare two strings. How you do that ?
 You pick out one-one character at the same index and you copare them. For ex:
 Take "hello" and "world"
  Here you have to pick 'h' and 'w' and compare and see which one is greater . Acc to ascii values 'w' is greater than 'h' so "world" will be greater than "hello".

  Now what if the fist character from both the strings are same like "hello" and "hi" , then you check the second character , third, fourth, until you find different characters.

  This is the question.oh alright.Sure.its pretty mind boggeling.Yeah.This is probably the best question in set 1.
*/