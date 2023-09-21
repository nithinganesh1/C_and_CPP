#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//this code will find the entered number prime number or not
	int num,i,j=0;
	printf("Enter a number \t");
	scanf("%d",&num);
	for(i=2;i<num;i++)
		{
		if (num%i ==0)
			{
			j=1;
			break;
			}
		}
	if (j==1 || num==1)
		{
		printf("%d is not a prime number",num);
		}
	else
		{
		printf("%d is a prime number",num);
		}
	return 0;
}
			
