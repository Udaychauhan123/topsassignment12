#include<stdio.h>
main(){
	int i;
	printf("While Loop: \n");
	i=1;
	
	while(i<=10){
		printf("%d \n",i);
		i++;
	}
	printf("\n");
	
	printf("For Loop: \n");
	i=1;
	
	for(i=1;i<=10;i++){
		printf("%d \n",i);		
	}
	printf("\n");
	
	printf("Do-While Loop: \n");
	i=1;
	
	do{
		printf("%d \n",i);
		i++;
	}
	while(i<=10);
	
}
