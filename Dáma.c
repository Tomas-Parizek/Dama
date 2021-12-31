#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "Knihovny/Speciální.c"
#include "Knihovny/Data.c"
#include "Knihovny/Zadávání.c"
#include "Knihovny/Vykreslování.c"
#include "Knihovny/Hry.c"

int main()
{
	srand(time(NULL));
	vyberpravidel();
	system("clear");
	printf("1 - Bílá\n2 - Červená\n3 - Náhodně\n");
	zapisbarvu(zadej("Se kterou barvou si přeješ dámu hrát?: ", 1, 3));
	vytvorsachovnici();

	if (pravidla == 1) ceska();
	else if (pravidla == 2) anglicka();
	else if (pravidla == 3) polska();
	else turecka();
}