//Print following patterns.

#include<stdio.h>
void main(){
	int i,j,k=1,a=0;
	char A=65;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(a%2==0){
				printf("0 ");
			}
			else{
				printf("1 ");
			}
			a++;
		}
		printf("\n");
	}
		
	printf("\n");
	for(i=1;i<=5;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("* ");
		}
	    printf("\n");
    }
    
    printf("\n");
    for(i=1;i<=5;i++){
    	for(j=1;j<=5-i;j++){
    		printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i%2==0){
				printf("%c ",A);
				A++;
			}
			else{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=1;i<=5;i++){
    	for(j=1;j<=5;j++){
			if(j==1 || j==5 || i==1 || i==5){
				printf("* ");	
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
    }
}
