//char sachovnice[8][4];
char *sachovnice;

// Nastavení

bool bila = true;
char pravidla = 1;

void sachovnicezapis(char rada, char bunka, char hodnota)
{
	/*
		první index - řádek - pozice.cislo
		druhý index - pozice - pozice.znak
	*/
	*(sachovnice + rada*4 + bunka) = hodnota;
}

void vypln()
{
	char prvni, druhy;
	if (bila)
	{
		prvni = 3;
		druhy = 1;
	}
	else
	{
		prvni = 3;
		druhy = 1;
	}
	for (char i = 0; i < 3; i++)
		for (char j = 0; j < 4; j++)
			sachovnicezapis(i, j, prvni);

	for (char i = 3; i < 5; i++)
		for (char j = 0; j < 4; j++)
			sachovnicezapis(i, j, 0);

	for (char i = 5; i < 8; i++)
		for (char j = 0; j < 4; j++)
			sachovnicezapis(i, j, druhy);
}

void vytvorsachovnici()
{
	switch(pravidla)
	{
		case 1:
		case 2:
			sachovnice = (char*)malloc(8*4*sizeof(char));
			vypln();
			break;
		case 3:
			sachovnice = (char*)malloc(10*5*sizeof(char));
			break;
		case 4:
			sachovnice = (char*)malloc(8*8*sizeof(char));
			break;
	}
}

