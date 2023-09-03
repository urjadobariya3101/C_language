#include<stdio.h>
int main()
{
	
	int i,j;
	
	for(i=5 ; i>=1 ; i--){
		for(j=5 ; j>=i ; j--){
			if(j%2==0){
				printf("0 ");
			}
			else{
				printf("1 ");
			}
		
		}
		printf("\n");
	}
	
	return 0;
	
}
