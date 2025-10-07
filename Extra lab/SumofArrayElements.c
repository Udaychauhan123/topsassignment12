#include<stdio.h>
main(){
	int N,i,sum=0;
	float ave;
	
	printf("Enter the numbers of elements : ");
	scanf("%d",&N);
	
	int arr[N];
	
	for(i=0;i<N;i++){
		printf("Enter %d numbers :",N);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	ave=(float)sum/N;
	printf("\n Sum of numners :%d\n",sum);
	printf("\n Average of numners :%.2f\n",ave);
}
