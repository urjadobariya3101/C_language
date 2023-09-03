#include<stdio.h>
int main()
{

	int r,c,rows=1;
	
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%d ",rows);
			rows++;
		}
		printf("\n");
	}
	
	return 0;
	
}
