#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//taking array form users and return the sum ot that array
	int l,i,s,p=-1;
	printf("How many element do you want enter");
	scanf("%d",&l);
	int a[l],sum=0;
	for(i=0;i<l;i++)
		{
		printf("Enter array %d : ",i+1);
		scanf("%d",&a[i]);
		}
	printf("What number do u want search?");
	scanf("%d",&s);
	for(i=0;i<l;i++)
		{
		  if(s==a[i])
		  	{
		  	p=i+1;
		  	break;
		  	}
		}
	if(p==-1)
		{
		printf("%d iteam not found in array",s);
		}
	else
		{
		printf("%d iteam found in %dth position",s,p);
		}
	return 0;
}
