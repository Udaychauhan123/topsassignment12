#include<stdio.h>
main(){
	int flag,i,j,number;
	
	printf("\n Enter number: ");
	scanf("%d",&number);
	
	i=2;
	while(i<=number){
		flag=0;
		j=2;
		
	while(j<=i/2){
		if(i%j==0){
			flag=1;
		}
		j++;
	}
		if(flag==0){
			printf("\t%d",i);
		}		
		i++;
}
}

