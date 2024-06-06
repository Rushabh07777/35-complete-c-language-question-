#include<stdio.h>
int main(){
    int a;
	int b;
//	int c=4;
	printf("Enter a Number :- ");
	scanf("%d %d",&a,&b);
	do{
//		printf("%d",b);
		if (a%4==0){
			printf("%d\n",a);
		}
		a++;
			
			
	}while(a<=b);	
	return 0;
}
	