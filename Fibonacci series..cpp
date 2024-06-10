#include<stdio.h>
int main(){
	int a,b;
	int var1=0, var2=1, next;
	printf("Enter a Number :- ");
	scanf("%d",&a);
	for(b=1; b<=a; ++b){
	    if(b==1){
	    	printf("%d",var1);
	    	continue;
		}
		if(b==1){
	    	printf("%d",var2);
	    	continue;
		}
		next= var1 + var2;
		
		var2=var1;
		
		var1=next;
		
		printf("%d",next);
	}
}