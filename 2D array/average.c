#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
		
	int a[n][n],i,j;
	int sum,avg;
	
	for(i=0 ; i<n ;i++){
		for(j=0 ; j<n ; j++){
			printf("enter elements[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	sum = 0;
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			sum += a[i][j];
		}
		
	}
	
	printf("\n");
	
	avg = sum / n;
	
	printf("Average = %d",avg);
	
	return 0;
}
