#include<stdio.h>

main(){
	
	FILE* fptr;
	
	char dataToBeRead[250];
	
	fptr = fopen("./input.txt", "r");
	
	while(fgets(dataToBeRead, 250, fptr)!=NULL){
		
	    printf("%s\n", dataToBeRead);
	}

	fclose(fptr);
	
}