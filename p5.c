#include<stdio.h>

main(){
	
	FILE* fptr;
	
	char ch;
	int count=1;
	
	fptr = fopen("./document.txt", "r");
	
	while((ch=fgetc(fptr))!=EOF){
		
		if(ch==' ' || ch=='\t' || ch=='\n' || ch=='\0'){
			
			count++;
		}
	}
	

	printf("Number Of Words In a File :- %d", count);
	fclose(fptr);
	
}