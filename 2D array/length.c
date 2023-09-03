#include<stdio.h>
int main()
{
	int a[3][4];
	
	int raw,col;
	
	raw = sizeof(a)/sizeof(a[0]);
	col = sizeof(a[0])/sizeof(a[0][0]);
	
	printf("raw : %d\n",raw); 
	printf("column : %d",col);
	
	return 0;
}
