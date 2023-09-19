#include <stdio.h>
#include <stdlib.h>
int main(void) {
	   int a;
	   printf("Enter a number");
	   scanf("%d",&a);
	   if (a>0){
	   	printf("%d is positive number",a);
	   	}
	   else if (a<0) {
	   	printf("%d is negative number",a);
	   	}
	   else {
	   	printf("funny it is zero :)");
	   	}
	   return 0;
}
