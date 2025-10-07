#include<stdio.h>
main(){
	int a,b;
	printf("Enter the first integer value:");
	scanf("%d",&a);
	
	printf("Enter the second integer value:");
	scanf("%d",&b);
	
	//arithmetic
	printf("\n--- Arithmetic Operations ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);
    
     // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    
     // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("a && b: %d\n", a && b);   
    printf("a || b: %d\n", a || b); 
	printf("a!=b: %d\n", a!=b);  
	printf("b!=a: %d\n", b!=a);
	
    	
}

