#include<stdio.h>
main(){
	int num;
	printf("Enter an integer:");
	scanf("%d",&num);
	if(num % 2==0){
		printf("The number is even %d\n: ",num);
	}
	else{
		printf("The number is odd %d\n: ",num);
	}
	if(num > 0){
		printf("The number is positive %d\n",num);
	}
	else if(num<0){
		printf("The number is negative %d\n",num);
	}else{
		printf("The number is zero.\n");
	}
	if (num % 3 == 0 && num % 5 == 0) {
        printf("The number %d is a multiple of both 3 and 5.\n", num);
    } 
	else {
        printf("The number %d is NOT a multiple of both 3 and 5.\n", num);
    }
}
