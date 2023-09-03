#include<stdio.h>
#include<string.h>

int stringlen(char a[]){
	
	int len=0;
	
	for(len=0;a[len]>'\0';len++){
	}
	return (len);
}

int main(){
	
	char a[500];
	int length;

	printf("Enter text :  ");
	gets(a);

   length = stringlen(a);

   printf("\nLength of the String is : %d", length);
   return 0;
   
}
