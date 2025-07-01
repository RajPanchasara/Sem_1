//Search element in array.

#include<stdio.h>
void main(){
	int a[5],i,b,count=0;
	for(i=0;i<5;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	start:
	printf("Enter element in array : ");
	scanf("%d",&b);
	for(i=0;i<5;i++){
		if(b==a[i]){
			count++;
		}
	}
	if(count==0){
		printf("Enter valid number\n");
		goto start;
	}
	else{
		for(i=0;i<5;i++){
			if(b==a[i]){
				printf("Enter number is at  index %d",i);
			}
		}	
	}
	
}
