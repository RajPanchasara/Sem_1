//Input a string in character array and print string and length of string.

#include<stdio.h>
void main(){
	int i,b,c=0;
	char a[100];
	printf("Enter string : ");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		c++;
	}
	printf("%d",c);
}
