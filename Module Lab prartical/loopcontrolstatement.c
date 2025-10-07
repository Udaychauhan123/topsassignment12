#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<=10;i++){
		if(i==3){
			break;
		}
		printf("\n i=%d",i);
	}
	printf("\n");
	
	for(j=1;j<=10;j++){
		if(j==3){
			continue;
		}
	printf("\n j=%d",j);		
}
}
