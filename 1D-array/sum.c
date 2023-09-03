#include<stdio.h>
int main()
{
	int n;
	
	printf("enter size of raw : ");
	scanf("%d",&n);
	
	int a[n];
	int i,sum=0;
	
	for(i=0 ; i<n ; i++){
		printf("enter elements [%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<n ; i++){
		printf("%d\n",a[i]);
	}
	for(i=0 ; i<n ; i++){
		
		sum += a[i];
	}
	printf("Sum of array : %d",sum);
	
	return 0;
}
