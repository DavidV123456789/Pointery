#include <stdio.h>
// pri používaní malloc:
#include <stdlib.h>

int main(int argc, char **argv){

	int a=5;
	int b=10;
	// nebude fungovať
	vymenHodnotou(a,b);
	printf("%d, %d",a,b);
	//
	vymenOdkazom(&a,&b);
	printf("%d, %d",a,b);
	
	int*pDruhy;
	if((pDruhy=(int *)malloc(sizeof(int)*10))==NULL)
	{
		puts("Neda sa alokovat pamat!");
		exit(1);
		
		}
	
	
	
	
	
	
	return 0;
}
