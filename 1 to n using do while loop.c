#include<stdio.h>
int main(){
	int a;
	int b=2;
	printf("Enter a Number :- ");
	scanf("%d",&a);
	do{
		printf("%d",b);
//		if (a%2==0){
//			
//		}
			b=b+2;
			
			
	}while(b<=a);
	
	return 0;
}