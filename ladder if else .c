#include<stdio.h>

int main(){
	
	int x;
	
	printf("Enter a Two Number :-");
	
	scanf("%d",&x);
	if(x<0){
		printf("This Number is Negative number %d");
	}if(x==0){
		printf("This Number is Netural number %d");
	}else {
		printf("This Number is Positive number");
	}
	
	return 0;
}