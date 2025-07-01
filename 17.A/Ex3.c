//Calculate sum of two numbers using pointer.

#include<stdio.h>
void main(){
	int *a1,*a2,n1,n2,sum;
	scanf("%d %d",&n1,&n2);
	a1=&n1;
	a2=&n2;
	sum=*a1+*a2;
	printf("sum = %d",sum);
}
