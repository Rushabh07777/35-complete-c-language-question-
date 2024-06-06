#include<stdio.h>

int main()
{
 int a,b;
 
// int c;

 printf("Enter the number");
 
 scanf("%d%d",&a,&b);
 
 a=b;
 
 b=a;
 
// b=c;
 
 printf("%d  %d",a,b);
 
return 0;
}