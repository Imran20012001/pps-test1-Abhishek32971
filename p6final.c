#include <stdio.h>
int input_n()
{
  int a;
  printf("enter the number \n");
  scanf("%d",&a);
  return a;
}
int sum(int a)
{
  int s=0,i;
  i=1;
  while(i<=a)
  {
    s=s+i;
    i++;
  }
  return s;
}
void output(int a,int s)
{
  int i=0,j=0;
  for (i;i<a;i++)
  {
    printf("%d+",i);
  }
  printf("%d is =%d",i,s);
}

void main()
{
  int b,sm;
  b=input_n();
  sm=sum(b);
  output(b,sm);
}