//Use string handling functions strlen(),strcmp(),strcpy(),strcat(),strrev(),strlwr() and strupr().

#include<stdio.h>
#include<string.h>
void main(){
	char a[50],b[50];
	printf("string a :");
	gets(a);
	printf("string b :");
	gets(b);
	printf("strlen(a):%d\nstrlen(b):%d",strlen(a),strlen(b));
	printf("\nstrcmp(a,b) :%d",strcmp(a,b));
	printf("\nstrcpy(a,b) :%s",strcpy(a,b));
	printf("\nstrcat(a,b) :%s",strcat(a,b));
	printf("\nstrrev(a) :%s\nstrrev(b) :%s",strrev(a),strrev(b));
	printf("\nstrlwr(a) :%s\nstrlwr(b) :%s",strlwr(a),strlwr(b));
	printf("\nstrupr(a) :%s\nstrupr(b) :%s",strupr(a),strupr(b));
}
