#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {
	//sample functon
	sum();
	return 0;  
}
void sum() {
	//functon
	int num1,num2,num3;
	printf("Enter 3 numbers \n");
	scanf("%d\n%d\n%d",&num1,&num2,&num3);
	printf("Sum of this numbers = %d",num1+num2+num3);
} 
