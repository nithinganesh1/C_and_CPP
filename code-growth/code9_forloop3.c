#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//take input from user and print the even numbers between 1 to that number
	int num,i;
	printf("Enter a number :\t");
	scanf("%d",&num);
	if (num<0)
		{
			printf("please Enter a positive number\n");
		}
	else
		{
			printf("Even numbers between 1 and %d is \n",num);
			for(i=2;i<=num;i=i+2)
				{
					printf("%d\n",i);
				}
		}
	return 0;
}
