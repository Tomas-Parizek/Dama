char *sachovnice;

// Nastavení

bool bila = true;
char pravidla;
char mindex, vindex;
char typ;


//Nastavování dat
void sachovnicezapis(char rada, char bunka, char hodnota)
{
	*(sachovnice + rada*mindex + bunka) = hodnota;
}

char sachovnicecteni(POZICE pozice)
{
	return *(sachovnice + pozice.cislo*mindex + pozice.znak);
}

void pd(char *a, char *b)
{
	if (bila)
	{
		*a = 3;
		*b = 1;
	}
	else
	{
		*a = 1;
		*b = 3;
	}
}

void vyplnrady(char prvni, char posledni, char obsah)
{
	for (char i = prvni; i < posledni; i++)
		for (char j = 0; j < mindex; j++)
			sachovnicezapis(i, j, obsah);
}

void vypln()
{
	char prvni, druhy;
	pd (&prvni, &druhy);

	vyplnrady(0, 3, prvni);
	vyplnrady(3, 5, 0);
	vyplnrady(5, 8, druhy);
}

void vyplnP()
{
	char prvni, druhy;
	pd (&prvni, &druhy);

	vyplnrady(0, 4, prvni);
	vyplnrady(4, 6, 0);
	vyplnrady(6, 10, druhy);

}

void vyplnT()
{
	char prvni, druhy;
	pd (&prvni, &druhy);

	vyplnrady(0, 1, 0);
	vyplnrady(1, 3, prvni);
	vyplnrady(3, 5, 0);
	vyplnrady(5, 7, druhy);
	vyplnrady(7, 8, 0);
}

void vytvorsachovnici()
{
	switch(pravidla)
	{
		case 1:
		case 2:
			sachovnice = (char*)malloc(8*4*sizeof(char));
			mindex = 4;
			vindex = 8;
			vypln();
			break;
		case 3:
			sachovnice = (char*)malloc(10*5*sizeof(char));
			mindex = 5;
			vindex = 10;
			vyplnP();
			break;
		case 4:
			sachovnice = (char*)malloc(8*8*sizeof(char));
			mindex = vindex = 8;
			vyplnT();
			break;
	}
}

void zapisbarvu(char a)
{
	if (a == 1) bila = true;
	else if (a == 2) bila = false;
	else bila = rand()%2;
}