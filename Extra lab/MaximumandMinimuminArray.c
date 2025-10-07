#include<stdio.h>
main(){
	int arr[10],temp,i,j,min,max;
	
	printf("Enter the integers array a[%d]: ",i);
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Maximum number :%d \n",max);
	printf("Minimum number :%d \n",min);
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("array in ascending order :");
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
	}
}
