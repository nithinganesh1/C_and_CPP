#include <stdio.h>
#include <stdlib.h>
int main(void) {
	 float a,b,c,avg;
	 printf("This will give avg of 3 given numbers\n");
	 printf("Enter 3 nubers\n") ;
	 scanf("%f%f%f",&a,&b,&c) ;
	 avg = (a+b+c)/3;
	 printf("avg of %f,%f and %f is %f",a,b,c,avg);
	 return 0;
}
	  
