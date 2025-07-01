//Swap two numbers using call by value and call by reference.

#include<stdio.h>
void swap(int *,int *);
void main(){
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	printf("Before : %d %d",n1,n2);
	swap(&n1,&n2);
	printf("\nAfter  : %d %d",n1,n2);
}
void swap(int *a1,int *a2){
	int temp;
	temp=*a1;
	*a1=*a2;
	*a2=temp;
}
