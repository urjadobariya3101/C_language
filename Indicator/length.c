#include <stdio.h>

int Length(char *str);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = Length(str);
    
    printf("Length of string: %d\n", len);
    
    return 0;
}

int Length(char *str) {
	
    int len = 0;
    
    while(*str != '\0') {
        len++;
        str++;
    }
    
    return len;
}

