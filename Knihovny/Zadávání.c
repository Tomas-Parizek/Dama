char zadej(char* hlaska, int min, int max)
{
	int a;
	do
	{
		printf("%s", hlaska);
		scanf("%d", &a);
	} while(a < min || a > max);
	return a;
}

POZICE zadejpozici(char *hlaska)
{
	POZICE a;
	char znak;
	char cislo;
	do
	{
		printf("%s", hlaska);
		scanf("%c%c", &a.znak, &a.cislo);
		getchar();
		a.cislo -= 48;
		if (a.znak > 72) a.znak -= 32;
		a.znak -= 64;
	} while (a.cislo < 1 || a.cislo > 8 || a.znak < 1 || a.znak > 8);
	return a;
}

void vyberpravidel()
{
	system("clear");
	printf("1 - Česká\n");
	printf("2 - Anglická\n");
	printf("3 - Polská\n");
	printf("4 - Turecká\n");
	pravidla = zadej("Zadej, podle kterých pravidel si přeješ hrát: ", 1, 4);
}

void vyberbarvy()
{
	system("clear");
	printf("1 - Bílá\n");
	printf("2 - Červená\n");
	printf("3 - Náhodně\n");
	zapisbarvu(zadej("Se kterou barvou si přeješ dámu hrát?: ", 1, 3));
}

void vybertypu()
{
	system("clear");
	printf("1 - Hráč proti počítači\n");
	printf("2 - Hráč proti hráči\n");
	typ = zadej("Jakým způsobem si přeješ dámu hrát?: ", 1, 2);
}