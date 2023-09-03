#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter size of an array : ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0 ; i<n ; i++){
		printf("Enter elements [%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0 ; i<n ; i++){
		printf("%d ",a[i]);
	}
	
	printf("\n\nNegative numbers : ");
	
	for(i=0 ; i<n ; i++){
		if(a[i]<0){
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
