#include<stdio.h>
main(){
	int x,month;
	printf("Enter the number: ");
	scanf("%d",&x);
	if(x%2==0){
		printf("The number is even");
	}
	else{
		printf("The number is odd\n");
	}
	printf("\nEnter the month in 1 to 12:");
	scanf("%d",&month);
	switch(month){
		case 1:
            printf("month: January\n");
            break;
        case 2:
            printf("month: February\n");
            break;
        case 3:
            printf("month: March\n");
            break;
        case 4:
            printf("month: April\n");
            break;
        case 5:
            printf("month: May\n");
            break;
        case 6:
            printf("month: June\n");
            break;
        case 7:
            printf("month: July\n");
            break;
        case 8:
            printf("month: August\n");
            break;
        case 9:
            printf("month: September\n");
            break;
        case 10:
            printf("month: October\n");
            break;
        case 11:
            printf("month: November\n");
            break;
        case 12:
            printf("month: December\n");
            break;
        default:
        	printf("Invalid month number:please enter a between 1 to 12.\n");
        	break;
	}
}
