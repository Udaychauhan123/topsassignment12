#include<stdio.h>
main(){
	int x1,x2,x3;
	
	printf("Enter the first number: ");
	scanf("%d",&x1);
	
	printf("Enter the second number: ");
	scanf("%d",&x2);
	
	printf("Enter the third number: ");
	scanf("%d",&x3);
	
	if (x1>x2 && x1>x3) 
		{
        	printf("Fitrst number is largest \n");  
        } 
		else if (x2>x1 && x2>x3) 
		{
            printf("Second number is largest \n");
        } 
		else if (x3>x1 && x3>x2)
		{
            printf("Third numebr is largest \n");
        } 
        
        if (x1<x2 && x1<x3)
		{
            printf("First number is smallest \n");
        }
        else if (x2<x3 && x2<x1) 
		{
            printf("Second number is smallest \n");
        } 
		else if(x3<x1 && x3<x2)
		{
            printf("Third numebr is smallest \n");
        }
	}
    
        
        
	

