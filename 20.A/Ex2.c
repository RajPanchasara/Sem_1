//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.

#include<stdio.h>
struct book{
	char title[30];
	char author[30];
	char publication[30];
	float price;
};
void main(){
	struct book b1={"a","a","a",1};
	struct book b2={"b","b","b",2};
	struct book b3={"c","c","c",3};
	printf("%s %s %s %f",b1.title,b1.author,b1.publication,b1.price);
	printf("\n%s %s %s %f",b2.title,b2.author,b2.publication,b2.price);
	printf("\n%s %s %s %f",b3.title,b3.author,b3.publication,b3.price);
}
