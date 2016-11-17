#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int (*type_func)(const char*, ...);

int main(){

	time_t timer;	

	int tab[14];

	tab[0] = -1038;
	tab[1] = -966;
	tab[2] = -865;
	tab[3] = -757;
	tab[4] = -649;
	tab[5] = -538;
	tab[6] = -506;
	tab[7] = -419;
	tab[8] = -308;
	tab[9] = -194;
	tab[10] = -86;
	tab[11] = 14;
	tab[12] = 24;
	tab[13] = 24;

	int i;

	for (i = 1 ; i < 13; i ++) printf("%c", tab[i] - tab[i-1]);




	return 0;

}
