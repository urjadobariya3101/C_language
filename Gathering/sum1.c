#include<stdio.h>
#include<string.h>
int sum_array(int n){
	 int a[n],i,sum=0;

    for(i=0;i<n;i++){
    	
    	printf("Enter array element in number [%d] : ",i);
    	scanf("%d",&a[i]);
    	sum = sum + a[i];
	}
   return sum;
}

int main(){

    int n,sum;

    printf("Enter length of array : ");

    scanf("%d",&n);

    sum = sum_array(n);
    
	printf("sum of array element : %d",sum);

    return 0;
}
