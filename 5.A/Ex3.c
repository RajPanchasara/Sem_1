//Given Number is positive or negative

#include<stdio.h>
void main(){
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	if(a>=0){
		printf("%d is Positive",a);
	}
	else{
	printf("%d is Negative",a);
	}
}
