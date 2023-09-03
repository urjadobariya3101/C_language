#include<stdio.h>
int main()
{
	
	int n;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n][n];
	int i,j;
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("Enter value [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	int sum = 0;
	
	for(i=0 ; i<n ; i++){
		sum+= a[i][n-i-1];
	}
	
	printf("Sum : %d",sum);
	
	
	
	
	return 0;
}

