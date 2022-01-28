#include <stdio.h>
int input()
{
  int a;
  printf("enter a number \n");
  scanf("%d",&a);
  return a;//a=2 
}
int cmp(int a,int b,int c)//1,2,3
{
  int g;
  if (a>b && a>c)
  {
    g=a;
  }
  else  if (b>c)//else if () {g=b;}
  {
    g=b;
  }
  else 
  {
    g=c;//g=3
  }
  return g;
}
void output(int x)//ga=x=3->ga=3
{
  printf("the greatest number among the three is:%d\n",g);
}
int main()
{
  int a,b,c,ga;//ga-large
  a=input();//a=2
  b=input();//b=a=2
  c=input();
  ga=cmp(a,b,c);//ga=g=c=3->ga=3
  output(ga);
  return 0;
}