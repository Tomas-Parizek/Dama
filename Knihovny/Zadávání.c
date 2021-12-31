int zadej(char* hlaska, int min, int max)
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
	zadej("Zadej, podle kterých pravidel si přeješ hrát: ", 1, 4);
}