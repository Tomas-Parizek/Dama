#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "Knihovny/Speciální.c"
#include "Knihovny/Data.c"
#include "Knihovny/Zadávání.c"
#include "Knihovny/Vykreslování.c"
#include "Knihovny/Hraní.c"
#include "Knihovny/Hry.c"

int main()
{
	srand(time(NULL));
	//vybertypu(); // - Bude použit až později
	vyberpravidel();
	vyberbarvy();
	vytvorsachovnici();

	if (pravidla == 1) ceska();
	else if (pravidla == 2) anglicka();
	else if (pravidla == 3) polska();
	else turecka();
}