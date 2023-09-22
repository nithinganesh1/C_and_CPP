#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//taking array form users and return the sum ot that array
	int l,i;
	printf("How many element do you want enter");
	scanf("%d",&l);
	int a[l],sum=0;
	for(i=0;i<l;i++)
		{
		printf("Enter array %d : ",i+1);
		scanf("%d",&a[i]);
		sum = sum+a[i];
		}
	printf("Sum of this array is : %d",sum);
	return 0;
}
