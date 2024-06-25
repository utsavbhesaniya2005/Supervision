#include<stdio.h>

main(){
	
	FILE *fptr1, *fptr2;
	
	char ch;
	
	fptr1 = fopen("./source.txt", "r");
	
	fptr2 = fopen("./destination.txt", "w");
	
	if(fptr1!=NULL && fptr2!=NULL){
		
		printf("The File Is Opened Successfully.");
	}
	
	while((ch = fgetc(fptr1)) !=EOF){
		
		fputc(ch, fptr2);
	}
	
	printf("\nFile Copied.");

	fclose(fptr1);
	fclose(fptr2);
	
}