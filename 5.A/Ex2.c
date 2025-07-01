//swap two Number

#include<stdio.h>
void main(){
	int a,b,temp;
	printf("x=");
	scanf("%d",&a);
	printf("y=");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("> x=%d y=%d",a,b);
}
