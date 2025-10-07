#include<stdio.h>
main(){
	int a,b;
	char operator;
	printf("Enter the first integer value:");
	scanf("%d",&a);
	
	printf("Enter the second integer value:");
	scanf("%d",&b);
	
	printf("Enter an operator(+,-,*,/,%	): ");
	scanf(" %c",&operator);
	switch(operator){
		case '+':
			printf("operator: %d + %d =%d\n",a,b,a+b);
			break;
		case '-':
			printf("operator: %d - %d =%d\n",a,b,a-b);
			break;
		case '*':
			printf("operator: %d * %d =%d\n",a,b,a*b);
			break;
		case '/':
			printf("operator: %d / %d =%d\n",a,b,a/b);
			break;
		case '%':
			printf("operator: %d %% %d =%d\n",a,b,a%b);
			break;
		default:
			printf("Invalid Write a proper operator...\n",operator);
			break;
       }
}
