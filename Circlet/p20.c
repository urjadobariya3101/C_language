#include<stdio.h>
int main()
{
	
	int i,j,k;
	int m=4,n=4;
	
	for(i=1 ; i<=4 ; i++){
		for(j=1 ; j<=7 ; j++){
			if(m==j || n==j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		m--;
		n++;
	}
	
	return 0;
}
