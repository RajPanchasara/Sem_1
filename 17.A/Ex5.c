//Store n elements in an array and print the elements using pointer.

#include<stdio.h>
void main(){
	int n,i;
	scanf("%d",&n);
	int a[n],*b;
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	b=a;
	for(i=0;i<n;i++){
		printf("\n%d",*(b+i));
	}
}
