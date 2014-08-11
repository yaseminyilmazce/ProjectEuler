#include <stdio.h>



int main(int argc, char *argv[]) {
	
	unsigned long int sayi=1;
	int flag=0;
	int i;
	while(flag==0)
	{
		sayi++;
		for(i=1;i<20;i++)
		{
			if(sayi%i!=0)
			{
				break;
			}
			
		}
		if(i==20)
			{
				flag=1;
			}
	}
	printf("%ld",sayi);
	
	return 0;
}
