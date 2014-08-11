#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	unsigned long int cnt, carpim, i,j,k,n;
	int x,y;
	
	for(x=100;x<1000;x++)
	{
		for(y=100;y<1000;y++)
		{
			carpim=x*y;
			
			
		}
	}
	
	i=1;
	j=1000000;
	while(i<=1000000 && j<=1000000)
	{
		k=(carpim/i)%10;
		n=(carpim/j)%10;
		
	}
	
	if(k==n)
	{
		printf("%ld ",carpim);
	}
	return 0;
}
