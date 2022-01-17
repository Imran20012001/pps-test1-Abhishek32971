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
  int sum=0,i;
  i=1;
  while(i<=a)
  {
    sum=sum+i;
    if (i<a)
    {
        printf("%d+",i);
    }
    else if (i=a)
    {
        printf("%d",i);
    }
    i++;
  }
  printf(" is %d",sum);
}
void main()
{
  int a;
  a=input_n();
  sum(a);
}
