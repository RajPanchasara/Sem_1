//Return the maximum of three floating-point numbers.

#include<stdio.h>
float max(float,float,float);
void main(){
	float a,b,c,p;
	scanf("%f %f %f",&a,&b,&c);
	p=max(a,b,c);
	printf("max : %f",p);
}
float max(float a,float b,float c){
	float p;
	p=(a>b)?((a>c)?a:c):((b>c)?b:c);
	return p;
}
