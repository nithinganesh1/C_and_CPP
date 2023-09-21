#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//in this code ask a num from user and print sum of 1 to that number
	int i,num,sum=0;
	printf("Enter a number :\t");
	scanf("%d",&num);
	if (num<0)
		{
			printf("please Enter a positive number\n");
		}
	else
		{
			for(i=1;i<=num;i++)
				{
				sum = sum+i;
				}
			printf("sum of 1 to %d = %d",num,sum);
		}
	return 0;
}
