#include<stdio.h>

void cube(int a){
	
	int cube;
	
	cube = a * a * a;
	
	printf("%d",cube);
	
}

int main(){
	
	int a;
	
	printf("Enter the value : ");
	scanf("%d",&a);
	
	cube(a);
		
	return 0;
}
