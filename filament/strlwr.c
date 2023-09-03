#include <stdio.h>
#include <string.h>
 
int main()
{
	
  	char Str[100];
  	int i;
 
  	printf("Enter a String to Convert into Lowercase :  ");
  	gets(Str);
  	
  	for (i = 0; Str[i]!='\0'; i++){
  		
  		if(Str[i] >= 'A' && Str[i] <= 'Z'){
  			
  			Str[i] = Str[i] + 32;
		}
	}

  	printf("\n The given String in Lower Case = %s", Str);
  	
  	return 0;
  	
}
