#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "Knihovny/Speciální.c"
#include "Knihovny/Zadávání.c"
#include "Knihovny/Data.c"
#include "Knihovny/Vykreslování.c"

int main()
{
	srand(time(NULL));
	vyberpravidel();
	system("clear");
	printf("1 - Bílá\n2 - Červená\n3 - Náhodně\n");
	zadej("Se kterou barvou si přeješ dámu hrát?: ", 1, 3);
}