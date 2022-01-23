 #include <stdio.h>
  void input_two_string(char *a,char *b)
   { 
     printf("enter the words\n");
     scanf("%s %s",a,b);
   }
   int strcmp(char *a,char *b)
   {
     int i;
     for( i=0;a[i] !='\0'&& a[i]==b[i];i++);
     return (a[i]-b[i]);
   }
   void output(char *a,char *b,int result)
   {
     if(result>0)
      printf("%s is greater than %s\n",a,b);
     else if(result==0)
      printf("%s is equal to %s\n",a,b);
     else
      printf("%s is greater than %s\n",b,a);
   } 
   int main()
   {
     char a[15],b[15];
     input_two_string(a,b);
     output(a,b,strcmp(a,b));
     return 0;
   }
/*return the difference of a[i] and b[i]*/