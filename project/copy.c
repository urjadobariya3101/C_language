#include<stdio.h>
int main(){
	
	int *p;
	
	FILE = fopen("collage.txt","w");
	
	printf("Enter text : ");
	
	if(p == NULL){
		printf("Error.");
	}
	else{
		gets(p);
		fclose(p);
	}
	
	return 0;
}
