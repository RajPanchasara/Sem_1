//Find factorial of a number using function and recursive function.

#include<stdio.h>
int fact(int );
void main(){
	int n,p;
	scanf("%d",&n);
	p=fact(n);
	printf("%d",p);
}
int fact(int n){
	int i,f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
