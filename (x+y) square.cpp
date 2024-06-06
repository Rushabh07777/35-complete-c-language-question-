#include<stdio.h>

int main(){
	
	int x,y;
	
	int sum;
	
	printf("Enter a Two Number :- ");
	
	scanf("%d %d",&x,&y);
	
	sum=(x*x+2*x*y+y*y);
	
	printf("%d",sum);
	
	return 0;
}