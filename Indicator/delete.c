#include<stdio.h>
int main()
{
	
	int a[] = {1,2,3,4,5};
	int *b;
	int i;
	
	b = a;
	
	for(i=0 ; i<=4 ; i++){
		printf("%d\t",*(b+i));
	}
	
	return 0;
}
