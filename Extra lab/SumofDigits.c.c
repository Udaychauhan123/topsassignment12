#include<stdio.h>
main(){
	int num,sum,digit=0,rev=0;
	printf("Enter the digits: \n");
	scanf("%d",&num);
	
	while(num!=0){
		digit=num%10;
		sum=sum+digit;
		rev=rev*10+digit;
		num=num/10;
	}
	printf("Sum of digit = %d\n",sum);
	printf("Reversed number = %d\n",rev);
}
