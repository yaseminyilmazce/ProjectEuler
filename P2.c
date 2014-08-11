// 374925503 BULUYOR AMA YANLIŞ 



#include <stdio.h>

int main(int argc, char *argv[]) {
	
	unsigned long int toplam,t1,t2,cnt;
	t1=0;
	t2=1;
	cnt=0;
	while(toplam!=4000000)
	{
		toplam=t1+t2;
		t1=t2;
		t2=toplam;
		
		cnt++;
	}
	
	printf("%ld ",cnt);
	
	
	
	
	
	return 0;
}
