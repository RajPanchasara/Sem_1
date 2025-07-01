//Find maximum and minimum between two numbers using function.

#include<stdio.h>
int max(int,int);
int min(int,int);
void main(){
	int a,b,x,y;
	scanf("%d %d",&a,&b);
	x=max(a,b);
	y=min(a,b);
	printf("max=%d\nmin=%d",x,y);
}
int max(int a,int b){
	int c;
	if(a<b){
		c=b;
	}
	else{
		c=a;
	}
	return c;
}
int min(int a,int b){
	int c;
	if(a>b){
		c=b;
	}
	else{
		c=a;
	}
	return c;
}
