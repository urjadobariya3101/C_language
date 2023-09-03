#include<stdio.h>
int main()
{
	
	int a[] = {10,20,30};
	int *b;
	int i;
	
	b = &a;
	
	for(i=0 ; i<=2 ; i++){
		
		printf("%u => %d\n",(b+i),*(b+i));
	}
	
	return 0;
}
