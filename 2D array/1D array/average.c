#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
		
	int a[n],i;
	int sum,avg;
	
	for(i=0 ; i<n ;i++){
		printf("enter elements[%d] : ",i);
		scanf("%d",&a[i]);
	}
	sum = 0;
	for(i=0 ; i<n ; i++){
		
		sum += a[i];
		
	}
	
	printf("\n");
	
	avg = sum / n;
	
	printf("Average = %d",avg);
	
	return 0;
}
