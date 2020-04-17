#include <stdio.h>
#include <stdlib.h> 
int main()
{
	
	char teller;
	char waarde = 0;
	for (teller=0; teller <10; teller++)
	{
	
		waarde = waarde + 1; 
		printf("de waarde van waarde is %d \n",waarde); 
	}
	system("pause");
	return 0; 
}
