char *sachovnice;

// Nastavení

bool bila = true;
char pravidla;
char mindex, vindex;

void sachovnicezapis(char rada, char bunka, char hodnota)
{
	*(sachovnice + rada*mindex + bunka) = hodnota;
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

void vypln()
{
	char prvni, druhy;
	pd (&prvni, &druhy);
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

void vyplnP()
{
	char prvni, druhy;
	pd (&prvni, &druhy);

	for (char i = 0; i < 4; i++)
		for (char j = 0; j < 5; j++)
			sachovnicezapis(i, j, prvni);

	for (char i = 4; i < 6; i++)
		for (char j = 0; j < 5; j++)
			sachovnicezapis(i, j, 0);

	for (char i = 6; i < 10; i++)
		for (char j = 0; j < 5; j++)
			sachovnicezapis(i, j, druhy);
}

void vyplnT()
{
	char prvni, druhy;
	pd (&prvni, &druhy);

	for (char i = 0; i < 1; i++)
		for (char j = 0; j < 8; j++)
			sachovnicezapis(i, j, 0);

	for (char i = 1; i < 3; i++)
		for (char j = 0; j < 8; j++)
			sachovnicezapis(i, j, prvni);

	for (char i = 3; i < 5; i++)
		for (char j = 0; j < 8; j++)
			sachovnicezapis(i, j, 0);

	for (char i = 5; i < 7; i++)
		for (char j = 0; j < 8; j++)
			sachovnicezapis(i, j, druhy);

	for (char i = 7; i < 8; i++)
		for (char j = 0; j < 8; j++)
			sachovnicezapis(i, j, 0);
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