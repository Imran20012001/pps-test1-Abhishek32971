#include<stdio.h>
int input()
{
  int a;
  printf("enter the number to be added:");
  scanf("%d",&a);
  return a;
}
int add(int t,int u)
{
  int sum;
  sum=t+u;
  return sum;
}
void output(int a,int b,int c)
{
  printf("sum of %d+%d=%d\n",a,b,c);
}
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=add(x,y);
  output(x,y,z);
  return 0;
}