#include <stdio.h>
int input(int *a,int *b,int *c)
{
  printf("enter numbers in the format a,b,c\n");
  scanf("%d,%d,%d",a,b,c);
}
int cmp(int a,int b,int c,int *g)
{
  if (a>b && a>c)
  {
    *g=a;
  }
  else  if (b>a && b>c)
  {
    *g=b;
  }
  else 
  {
    *g=c;
  }
}
void output(int g)
{
  printf("the greatest number among the three is:%d\n",g);
}
int main()
{
  int a,b,c,ga;
  input(&a,&b,&c);
  cmp(a,b,c,&ga);
  output(ga);
  return 0;
}