#include<stdio.h>
#include<string.h>
int main(){
	
	char a[50];
	
	printf("Enter the string : ");
	scanf("%s",&a);
	
	int rev;
	
	rev = strrev(a);
	
	if(a == rev){
		printf("It is palindrom.");
	}
	else{
		printf("It is not palindrom.");
	}
	
	return 0;
}
