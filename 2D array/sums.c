#include<stdio.h>
int main()
{
	int n;
	
	printf("enter size of array : ");
	scanf("%d",&n);
	
	int a[n][n];
	int i,j;
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("enter elements [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int b[n][n];
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("enter elements [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int c[i][j];
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Sum of two array : \n");
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
