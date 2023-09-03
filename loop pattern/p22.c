#include<stdio.h>
int main()
{
	
	char i,j,k='A';
	
	for(i='A';i<='E';i++){
		
		for(j=i;j<='E';j++){
			
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
	
	return 0;
	
}
