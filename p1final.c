#include<stdio.h>
int input()
{
  int a;
  printf("enter the number to be added:");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int c)
{
  printf("sum of %d+%d=%d\n",a,b,c);
}
int main()
{
  int a,b,q;
  a=input();
  b=input();
  q=add(a,b);
  output(a,b,q);
  return 0;
}