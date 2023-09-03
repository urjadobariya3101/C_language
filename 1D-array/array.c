#include<stdio.h>
int main()
{
	
	int n;
	
	printf("enter size of array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0 ; i<n ; i++){
		printf("Enter elements [%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<n ; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
