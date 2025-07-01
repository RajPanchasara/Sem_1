//Demonstrate difference between structure and union.

#include<stdio.h>
#include<string.h>
struct student1{
	char name[20];
	int marks;
};
union student2{
	char name[20];
	int marks;
};
void main(){
	struct student1 ss={"raj",1};
	union student2 us={"raj",1};
	printf("\t	Name	Marks\n");
	printf("In structure   :%s\t%d\n",ss.name,ss.marks);
	printf("In union       :%s\t%d",us.name,us.marks);
}
