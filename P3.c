#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	long double cnt  ,pn;
	int m, i , i2,k;
	int *A;

	for(i=2;i<600851475143;i++)
	{
		m=1;
		for(i2=2;i2<i;i2++)
		{
			if(i%i2==0)
			m=0;
			cnt++;
			break;
			
		}
		
	  	
	}
	for(k=0;k<cnt;k++)
	{
		if(m==1)
		{
			A[k]=i;
			
		}
	}
	
	
	for(k=0;k<cnt;k++)
	{
		if(600851475143%A[k]==0)
		{
			pn=A[k];
		}
		printf("%ld  ",pn);
	}



	return 0;
}
