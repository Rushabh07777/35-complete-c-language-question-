#include<stdio.h>

int main()
{
 int a,b;
 
 int c;

 printf("Enter the number");
 
 scanf("%d%d",&a,&b);
 
 a=a+b;
 
 b=a-b;
 
 a=b-a;
 
 printf("%d  %d",a,b);
 
return 0;
}