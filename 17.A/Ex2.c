//Demonstrate int, float, double and char pointer.

#include<stdio.h>
void main(){
	int *a,*b,*c,*d,n1;
	float n2;
	double n3;
	char n4;
	printf("int n1 = ");
	scanf("%d",&n1);
	printf("float n2 = ");
	scanf("%f",&n2);
	printf("double n3 = ");
	scanf("%lf",&n3);
	printf("char n4 = ");
	scanf(" %c",&n4);
	a=&n1;
	b=&n2;
	c=&n3;
	d=&n4;
	printf("\nint : %d %d",a,*a);
	printf("\nfloat : %d %f",b,*b);
	printf("\ndouble : %d %lf",c,*c);
	printf("\nchar : %d %c",d,*d);
}
