//Count number of positive, negative and zero elements from 3 X 3 matrix.

#include<stdio.h>
void main(){
	int a[3][3],i,j,p=0,n=0,z=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("arry[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>0){
				p++;
			}
			else if(a[i][j]<0){
				n++;
			}
			else{
				z++;
			}
		}
	}
	printf("positive : %d\nnegative : %d\nzero : %d",p,n,z);
}
