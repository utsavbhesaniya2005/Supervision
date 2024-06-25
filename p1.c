#include<stdio.h>

main(){
	
	FILE* fptr;
	
	fptr = fopen("sample.txt", "r");
	
	if (fptr == NULL) {
        printf("The File is Not Opened...");
    }else{
    	printf("File Opened Succesfully...");
	}
	
	fclose(fptr);
	
	printf("\nAnd The File is Now Closed...");
	
}