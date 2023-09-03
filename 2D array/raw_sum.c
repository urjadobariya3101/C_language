#include<stdio.h>
int main()
{
	int m,n;
	
	printf("Enter size of row : ");
	scanf("%d",&m);
	printf("Enter size of column : ");
	scanf("%d",&n);
	
	int a[m][n];
	int i,j,sum=0;
	
	for(i=0 ; i<m ; i++){
		for(j=0 ; j<n ; j++){
			printf("Enter element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0 ; i<m ; i++){
		for(j=0 ; j<n ; j++){
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	
	for(i=0 ; i<m ; i++){
		sum = 0;
		for(j=0 ; j<n ; j++){
			
			sum += a[i][j];
		}
		printf("sum[%d] : [%d]\n",i,sum);
	}
	
	
	
	return 0;
}
