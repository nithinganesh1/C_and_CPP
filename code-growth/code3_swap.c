#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a,b,temp;
	printf("Enter 2 numbers it will Swap and Return \n");
	scanf("%d%d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("Swaped Characers is %d and %d",a,b); // this code only for learing we can print easly without swaping
	return 0;
}
