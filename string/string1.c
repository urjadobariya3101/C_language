#include<stdio.h>
#include<string.h>
int main()
{
	
	char a[] = {"user"};
	char b[] = {"123"};
	
	printf("Enter the user name : ");
	scanf("%s",&a[50]);
	
	printf("Enter the password : ");
	scanf("%s",&b[50]);
	
	if(strcmp(a[50],"user")){
		if(strcmp(b[50],"123")){
			printf("successfully login...");
		}
		else{
			printf("Incorrect password...");
		}
	}
	
	else{
		printf("Incorrect username...");
	}
	
	
	
	return 0;
}
