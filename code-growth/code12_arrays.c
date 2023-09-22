#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//taking 5 intiger from user and return its squares
	int ar[5],sq[5],i;
	for(i=0;i<5;i++)
		{
		printf("Number %d = ",i+1);
		scanf("%d",&ar[i]);
		sq[i] = ar[i]*ar[i];
		}
	printf("Number and its squares");
	for(i=0;i<5;i++)
		{
		printf("%d = %d \n",ar[i],sq[i]);
		}
	return 0;
}
