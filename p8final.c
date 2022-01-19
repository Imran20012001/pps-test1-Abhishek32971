#include<stdio.h>
float input()
{
    float n;
    printf("enter the number to find its root:\n");
    scanf("%f",&n);
    return n;
}
float squareRoot(float n) 
{ 
    float a=n; 
    float b=0; 
    float q=0.00001; 
    while (a-b>q)
    { 
        a=(a+b)/2; 
        b=n/a; 
    } 
    return a; 
} 
void output(float a)
{
    printf("the square is: %f",a);
}
void main()
{
    float a,b;
    a=input();
    b=squareRoot(a);
    output(b);
}