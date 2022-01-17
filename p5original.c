#include <stdio.h>
void input(int *a,int *b,int *c)
{
  printf("enter a numbers in a,b,c format \n");
  scanf("%d,%d,%d",a,b,c);
}
void cmp(int a,int b,int c)
{
  (a<b&&c<a)?printf("c<a<b"):(((a>b)&&(c>a))?printf("c>a>b"):((b>c&&c>a)?printf("b>c>a"):((b<c&&c<a)?printf("b<c<a"):((a>b&&b>c)?printf("a>b>c"):printf("a<b<c")))));
}
void main()
{
  int a,b,z;
  input(&a,&b,&z);
  cmp(a,b,z);
}
