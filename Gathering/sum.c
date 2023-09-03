#include <stdio.h>
int sum(int n){
	
	int a[n];
	int sum=0,i;
	
	for(i=0 ; i<n ; i++){
		printf("Enter the value [%d] : ",i);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	
	return sum;
	
}

int main(){
	
	int n,sums;

    printf("Enter length of array : ");

    scanf("%d",&n);

    sums = sum(n);
    
	printf("sum of array element : %d",sums);

    return 0;
}
