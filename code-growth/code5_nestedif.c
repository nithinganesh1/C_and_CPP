#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// this code take 2 numbers from users and peform calculations
	float a,b,c,return_value;
	printf("Enter 2 numbers: \n");
	scanf("%f\n%f",&a,&b);
	printf("Enter \n 1 of addition \n 2 for subtraction \n 3 for multiplication \n 4 for division");
	scanf("%f",&c);
	if (c == 1)
	{
		return_value = a+b;
		printf("%f+%f=%f",a,b,return_value);
	}
	else if (c == 2)
	{
		return_value =a-b;
		printf("%f-%f=%f",a,b,return_value);
	}
	else if (c == 3)
	{
		return_value =a*b;
		printf("%f*%f=%f",a,b,return_value);
	}
	else if (c == 4)
	{
		return_value = a/b;
		printf("%f/%f=%f",a,b,return_value);
	}
	else
	{
		printf("dont try enything else :) enther 1,2,3 or 4 \n (,,>﹏<,,)\n");
	}
	return 0;
}
