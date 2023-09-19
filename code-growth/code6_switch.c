#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// this code take 2 numbers from users and peform calculations
	char c;
	float a,b,return_value;
	printf("Enter \n + of addition \n - for subtraction \n * for multiplication \n / for division");
	scanf("%c",&c);
	printf("Enter 2 numbers: \n");
	scanf("%f\n%f",&a,&b);
	
	switch(c) {
		case '+':
			return_value = a+b;
			printf("%f+%f=%f",a,b,return_value);
			break;
		case '-':
			return_value =a-b;
			printf("%f-%f=%f",a,b,return_value);
			break;
		case '*':
			return_value =a*b;
			printf("%f*%f=%f",a,b,return_value);
			break;
		case '/':
			return_value = a/b;
			printf("%f/%f=%f",a,b,return_value);
			break;
		default:
			printf("dont try enything else :) enther 1,2,3 or 4 \n (,,>﹏<,,)\n");
		}
	return 0;
}
			
