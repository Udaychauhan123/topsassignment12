#include<stdio.h>
main(){
	int i,j,k;
	int matrix1[3][3],matrix2[3][3],sum[3][3],prod[3][3];
	//matrix 1

	printf("Enter the first matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("matrix1[%d][%d]=",i,j);
		scanf("%d",&matrix1[i][j]);
	 }
	}
	//matrix 2
	
	printf("Enter the second matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("matrix2[%d][%d]=",i,j);
		scanf("%d",&matrix2[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j]=matrix1[i][j] + matrix2[i][j];
		}
	}
	 
	printf("3*3 matrix addition: \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
	//multiplication
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			prod[i][j]=0;
		for(k=0;k<3;k++){
			prod[i][j]+=matrix1[i][k] * matrix2[k][j];
		 }
	   }
	}
	printf("3*3 matrix multiplication: \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			printf("%d \t",prod[i][j]);
		}
		printf("\n");
	}	
}
