#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	

	double sum=0; 
	int x;
	for(x=0;x<1000;x++)
	{
		if(x%3==0)
		{
			sum = sum+x;
		}
		else if(x%5==0)
		{
			sum=sum+x;
		}
		else if(x%15==0)
		{
			sum=sum-x;
		}
	}
	printf("%.2f",sum);

	
	
	
	return 0;
}
