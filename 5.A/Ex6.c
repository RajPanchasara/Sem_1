//Vowel or Consonent

#include<stdio.h>
void main(){
	char a;
	printf("Enter any alphabate : ");
	scanf("%c",&a);
	if(a==a||a=='e'||a=='i'||a=='o'||a=='u'){
		printf("%c is Vowel",a);
	}
	else{
		printf("%c is Consonent",a);
	}
}
