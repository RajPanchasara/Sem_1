//Create, declare and initialize structure employee.

#include<stdio.h>
struct employee{
	char name[20];
	float salary;
};
int main(){
	struct employee e1={"a",15000},e2={"b",20000},e3={"c",25000};
	printf("\tname:   \tsalary:");
	printf("\nemployee-1: %s\t\t%.3f",e1.name,e1.salary);
	printf("\nemployee-2: %s\t\t%.3f",e2.name,e2.salary);
	printf("\nemployee-3: %s\t\t%.3f",e3.name,e3.salary);
}
