#include<stdio.h>
int input()
{
  int a;
  printf("enter the size of the array:\n");
  scanf("%d",&a);
  return a;
}
int sum(int a)
{
  int ar[a];
  int sum=0;
  for (int i=0;i<a;i++)
  {
    printf("enter the values into the array\n");
    scanf("%d",&ar[i]);
    sum=sum+ar[i];  
  }
  return sum;
}
void output(int sum)
{
  printf("the sum of all the digits entered is:%d\n",sum);
}
void main()
{
  int a,s;
  a=input();
  s=sum(a);
  output(s);
}