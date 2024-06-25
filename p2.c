#include<stdio.h>

main(){
	
	FILE* fptr;
	
	char dataToBeRead[250];
	
	fptr = fopen("./output.txt", "w");
	
	fputs("Hello, Utsav Good Morning!\n", fptr);
	
	if(fptr==NULL){
		
		printf("String Is Not Insert In File..");
	}else{
		
		printf("String Is Added To FIle...");
	}
	
	fclose(fptr);
	
}