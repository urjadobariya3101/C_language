#include<stdio.h>
#include<string.h>
void string(){
	char a[50];
	
	printf("Enter a string : ");
	scanf("%s",&a);
	
	printf("Length : %d ",strlen(a));
	
}

int main(){
	
	string();
	
	return 0;
}
