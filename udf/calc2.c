#include<stdio.h>
int add(int a,int b){
	
	return a + b;
}

int sub(int a,int b){
	
	return a - b;
}

int div(int a,int b){
	
	return a / b;
}

int multi(int a,int b){
	
	return a * b;
}

int main(){
	
	char operator;
	int a,b,result;
	
	while(1){
		
		printf("\n\nEnter an operator (+ , - , * , /) : ");
		scanf("%c",&operator);
		
		 if (operator == 'q' || operator == 'Q') {
            break;  // Exit program if user inputs 'q' or 'Q'
        }
		
		printf("Enter first number : ");
		scanf("%d",&a);
		
		printf("Enter second number : ");
		scanf("%d",&b);
		
		switch(operator){
			
			case '+':
				
				result = add(a,b);
				printf("\n%d + %d = %d",a,b,add);
				break;
				
			case '-':
				result = sub(a,b);
				printf("\n%d - %d = %d",a,b,sub);
				break;
				
			case '*':
				result = multi(a,b);
				printf("\n%d * %d = %d",a,b,multi);
				break;	
				
			case '/':
				result = div(a,b);
				printf("\n%d / %d = %d",a,b,div);
				break;
				
			default:
				printf("Invalid operator.\n");
				
		}
		
		while (getchar() != '\n') {}
	}
	
	return 0;
}
