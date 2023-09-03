#include <stdio.h>

int main() {
    
    int a[5];
    int *b;
    int i;
	
	for(i=0 ; i<=4 ; i++){
		
		printf("Enter value [%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<=4 ; i++){
		
		b = a;
		printf("%d\n",*(b+i));
	}
    
	return 0;
}


