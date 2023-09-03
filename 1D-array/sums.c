#include<stdio.h>
int main()
{
	int n;
	
	printf("enter size of raw : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0 ; i<n ; i++){
		printf("enter elements [%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<n ; i++){
		printf("%d\n",a[i]);
	}
	
	int b[n];
	
	for(i=0 ; i<n ; i++){
		printf("enter elements [%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0 ; i<n ; i++){
		printf("%d\n",b[i]);
	}
	
	int c[i],sum=0;
	
	for(i=0 ; i<n ; i++){
		c[i] = a[i] + b[i];
	}
	
	printf("Sum of two array : \n");
	
	for(i=0 ; i<n ; i++){
		printf("%d ",c[i]);
	}
	
	
	return 0;
}
