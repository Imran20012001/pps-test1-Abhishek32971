int input()
{
  int a;
  printf("enter the size of array\n");
  scanf("%d",&a);
  return a;
}
void store(int num,int arraY[num])
{
  int i;
  printf("put the individual digit\n");
  for(i=0;i<num;i++)
    scanf("%d",&arraY[i]);
}
void output(int num,int arraY[num])
{
  for(int i=0;i<num;i++)
    printf("%d\n",arraY[i]);
}
int main()
{
  int getnum=input();
  int storE[getnum];
  store(getnum,storE);
  output(getnum,storE);
}