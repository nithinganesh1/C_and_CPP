#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//taking array form users and return the sum ot that array
	int l,i,j,temp;
	printf("How many element do you want enter");
	scanf("%d",&l);
	int a[l],sum=0;
	for(i=0;i<l;i++)
		{
		printf("Enter array %d : ",i+1);
		scanf("%d",&a[i]);
		}
	for(i=0;i<l-1;i++)
		{
		for(j=i+1;j<l;j++)
			{
			 if(a[j]<a[i])
			 	{
			 	temp = a[i];
			 	a[i] = a[j];
			 	a[j] = temp;
			 	}
			 }
		}
	printf("Sorted array : \n");
	for(i=0;i<l;i++)
		{
		printf("%d  ",a[i]);
		}
	return 0;
}
