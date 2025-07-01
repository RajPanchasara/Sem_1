//Find a character from given string.

#include<stdio.h>
#include<string.h>
void main(){
	char a[50],c;
	int i,j;
	printf("str a:");
	gets(a);
	j=strlen(a);
	printf("enter char :");
	scanf("%c",&c);
	for(i=1;i<=j;i++){
		if(a[i]==c){
			printf("%c on index No. %d",c,i);
		}
	}
}
