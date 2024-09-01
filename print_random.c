#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Kostandin Jorgji | Repo link: https://github.com/tug74295/3207-Lab-Introduction_F24-
char randchar();

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}
