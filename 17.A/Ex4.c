//Swap value of two numbers using pointer.

#include<stdio.h>
void main(){
	int *a1,*a2,n1,n2,temp;
	scanf("%d %d",&n1,&n2);
	a1=&n1;
	a2=&n2;
	temp=*a1;
	*a1=*a2;
	*a2=temp;
	printf("Before : %d %d\nAfter  : %d %d",n2,n1,*a1,*a2);
}
