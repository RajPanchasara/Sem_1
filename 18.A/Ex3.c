//Count simple interest using function.

#include<stdio.h>
int fun(int,int,int);
void main(){
	int p,i,t,c;
	scanf("%d %d %d",&p,&i,&t);
	c=fun(p,i,t);
	printf("totla interest = %d\nEnd Balance = %d",c,p+c);
}
int fun(int p,int i,int t){
	int a;
	a=(p*i*t)/100;
	return a;
}
