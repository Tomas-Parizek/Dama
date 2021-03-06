void oddelovac()
{
	printf("+");
	for (char i = 0; i < vindex; i++)
		printf("---+");
	printf("\n");
}

void bunka(char figurka)
{
	switch (figurka)
	{
		case 0:
			printf("   |");
			break;
		case 1:
			printf(" o |");
			break;
		case 2:
			printf(" * |");
			break;
		case 3:
			printf("\033[1;31m o \033[0m|");
			break;
		case 4:
			printf("\033[1;31m * \033[0m|");
			break;
	}
}

void radek(bool nalevo, char figurka[mindex])
{
	printf("|");
	if (nalevo)
	{
		for (char i = 0; i < mindex; i++)
		{
			bunka(figurka[i]);
			bunka(0);
		}
	}
	else
	{
		for (char i = 0; i < mindex; i++)
		{
			bunka(0);
			bunka(figurka[i]);
		}
	}
	printf("\n");
}

void zobrazit()
{
	system("clear");
	for (char i = 0; i < mindex; i++)
	{
		oddelovac();
		radek(0, (sachovnice + i*2*mindex));
		oddelovac();
		radek(1, (sachovnice + (i*2+1)*mindex));
	}
	oddelovac();
}

//Turecká dáma

void radekT(char figurka[mindex])
{
	printf("|");
	for (char i = 0; i < mindex; i++)
		bunka(figurka[i]);
	printf("\n");
}

void zobrazitT()
{
	system("clear");
	for (char i = 0; i < vindex; i++)
	{
		oddelovac();
		radekT(sachovnice + i*8);
	}
	oddelovac();
}