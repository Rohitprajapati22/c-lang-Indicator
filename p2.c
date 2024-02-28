#include<stdio.h>

void cube(){
	int *p,n,i,j;
	printf("Enter the array's size : ");
	scanf("%d",&n);

	int arr[n][n];	
	p =&arr;

	printf("\nEnter array's elements :\n");

	for(i=0;i < n;i++){
		for(j = 0;j < n; j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\nCubes of all elements:\n");
	for(i =0;i < n;i++){
		for(j = 0;j < n; j++){
			*p = arr[i][j]*arr[i][j]*arr[i][j];
			printf("%d, ",*p);
		}
	}
}

void main(){

	cube();

}
