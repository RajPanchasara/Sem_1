//Add two numbers using function.

#include<stdio.h>
int add(int,int);
void main(){
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("%d",c);
}
int add(int c,int d){
	int sum;
	sum=c+d;
	return sum;
}
