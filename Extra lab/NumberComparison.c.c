#include<stdio.h>
main(){
	int x1,x2,x3,large,small;
	
	printf("Enter the first number: ");
	scanf("%d",&x1);
	
	printf("Enter the second number: ");
	scanf("%d",&x2);
	
	printf("Enter the third number: ");
	scanf("%d",&x3);
	
	if (x1>x2 && x1>x3) 
		{
        	large=1;
        } 
		else if (x2>x1 && x2>x3) 
		{
            large=2;
        } 
		else if (x3>x1 && x3>x2)
		{
           large=3;
        } 

		if (x1<x2 && x1<x3) 
		{
        	small=1;
        } 
		else if (x2<x1 && x2<x3) 
		{
            small=2;
        } 
		else if (x3<x1 && x3<x2)
		{
           small=3;
        } 	
	switch(large){
		case 1:
			if (x1>x2 && x1>x3) 
		{
        	printf("Fitrst number is largest \n");  
        } 
        break;
        case 2:
         if (x2>x1 && x2>x3) 
		{
            printf("Second number is largest \n");
        } 
        break;
        case 3:
        	if (x3>x1 && x3>x2) 
		{
            printf("Third number is largest \n");
        } 
        break;
        
	}
		switch(small){
		case 1:
			if (x1<x2 && x1<x3) 
		{
        	printf("\nFitrst number is smallest ");  
        } 
        break;
        case 2:
         if (x2<x1 && x2<x3) 
		{
            printf("\nSecond number is smallest ");
        } 
        break;
        case 3:
        	if (x3<x1 && x3<x2) 
		{
            printf("\nThird number is smallest ");
        } 
        break;
        
	}
}
    
        
        
	

