#include<stdio.h>
int main(){
	
	char i,j;
	int count=0;
	
	for(i='A' ; i<='E'; i++){
		for(j='A' ; j<=i ; j++){
			printf("%c ",i);
			count++;
		}
		printf("\n");
		
	}
	
	return 0;
}
