#include <stdio.h>
#include <stdlib.h>
int multiply(int,int);
int main(void) {
	//function with arg and return
	int a,b,mul;
	printf("Enter 2 numbers and it will Return its Multiplication \n");
	scanf("%d \n %d",&a,&b);
	mul = multiply(a,b);
	printf("%d*%d = %d",a,b,mul);
}

int multiply(int num1,int num2) {
	return num1*num2;
}
