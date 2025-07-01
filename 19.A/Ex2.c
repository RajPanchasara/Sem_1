//Pass an array in function to print array elements.

#include<stdio.h>
int a(int b[5]);
void main(){
	int b[5],i;
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);
	}
	a(b);
}
int a(int b[5]){
	int i;
	for(i=0;i<5;i++){
		printf("\n%d",b[i]);
	}
}

