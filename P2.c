int main(int argc, char *argv[]) {
	
	unsigned long int toplam,t1,t2,cnt,even;
	t1=1;
	t2=2;
	even=2;
	toplam=0;
	
	while(toplam<4000000)
	{
		toplam=t1+t2;
		t1=t2;
		t2=toplam;
		
		
		
	    if(toplam%2==0)
		{
			even=even+toplam;
			
		}	
		
		
	}
	
	
	printf("%ld ",even);
	
	
	
	
	
	return 0;
}
