#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//in this code make a star triangle
	int rows,i,j,k;
	printf("Enter number of rows:  ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
		{
		for(j=1;j<=i;j++)
			{
			printf("*");
			}
		printf("\n");
		}
	return 0;
}
