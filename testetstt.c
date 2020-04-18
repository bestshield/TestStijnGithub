#include <stdio.h>
#include <stdlib.h> 


int main(void)
{ 
	int ERRORCODE; 
	int waarde = 1 + 0;
	
	if (waarde == 2)
	{
		ERRORCODE = 0;
	}
	if (waarde != 2)
	{
		ERRORCODE = 1;
	}
	printf("waarde = %d", waarde);
	printf("ERRORCODE = %d", ERRORCODE);
	return ERRORCODE;        
}
