//Replace a character in given string.

#include<stdio.h>
#include<string.h>
void main(){
	char a[50],c,r;
	int i,j;
	printf("str:");
	gets(a);
	j=strlen(a);
	printf("enter char : ");
	scanf(" %c",&c);
	printf("enter new char : ");
	scanf(" %c",&r);
	for(i=0;i<=j;i++){
		if(a[i]==c){
			a[i]=r;
			printf("\nnew str:%s",a);
		}
	}
}
