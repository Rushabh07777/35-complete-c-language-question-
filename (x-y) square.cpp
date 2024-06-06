#include<stdio.h>

int main(){
	
	int x,y;
	
	int sum;
	
	printf("Enter a Two Number");
	
	scanf("%d %d",&x,&y);
	
	sum=(x*x+y*y-2*x*y);
	
	printf("%d",sum);
	
	return 0;
}