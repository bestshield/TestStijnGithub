#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h> /* time() */
int main(void)
{
	int raadgetal;
	int getal;

//srand (time(NULL));
getal = rand() % 100 + 1;
printf ("het getal is = %d \n",getal); 

    do
	{
		scanf("%d",&raadgetal);
		if(raadgetal<getal) printf("het getal is hoger \n");
		if(raadgetal>getal) printf("het getal is lager \n");
	} while(getal!=raadgetal);

printf("FISSA \n");
printf("Het getal was %d \n",getal);

return 0;
}
