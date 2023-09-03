#include<stdio.h>

void div(int a)
{

	
	if(a%3==0 && a%5==0){
		printf("It is divisable by 3 and 5.");
	}

	else{
		printf("It is not divisable by 3 and 5.");
	}
	
}

int main(){
	int a;
		
	printf("Enter the number : ");
	scanf("%d",&a);
	
	div(a);
	
	return 0;
}
