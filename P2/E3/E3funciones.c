#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "E3.h"

void reserveMemoryforStruct(player **team, int *numberOfPlayers)
{
	char c;
	printf("\n¿Cuantos jugadores tiene su equipo?\n");
	scanf("%d", &(*numberOfPlayers));
	while((c= getchar()) != '\n' && c != EOF);
	*team = (player *) malloc(*numberOfPlayers * sizeof(player));
}

player fillInPlayerData()
{
	char c;
	system("clear");
	player aux;
	printf("\n¿Como se llama el jugador?\n");
	scanf("%s",aux.name);
	while((c= getchar()) != '\n' && c != EOF);
	printf("\n¿Cual es el dorsal del jugador?\n");
	scanf("%d",&aux.number);
	while((c= getchar()) != '\n' && c != EOF);
	printf("\n¿Cuanto pesa el jugador?\n");
	scanf("%f", &aux.weight);
	while((c= getchar()) != '\n' && c != EOF);
	printf("\n¿Cuanto mide el jugador?\n" );
	scanf("%d", &aux.height);
	while((c= getchar()) != '\n' && c != EOF);
	return aux;
}

void addTeam(player team[], int *numberOfPlayers)
{
	for (int i = 0; i < *numberOfPlayers; ++i)
	{
		team[i]=fillInPlayerData();
	}

}

void printTeam(player team[], int *numberOfPlayers)
{
	for (int i = 0; i < *numberOfPlayers; ++i)
	{
		printf("\n--------------------------\n");
		printf("Nombre: %s\n", team[i].name);
		printf("Dorsal: %d\n", team[i].number);
		printf("Peso: %fKg\n", team[i].weight);
		printf("Estatura: %dcm\n", team[i].height);
		printf("--------------------------\n");
	}
}

int removePlayerWhoseNameContainsX(player team[], int *numberOfPlayers, char *letter)
{
	int aux = *numberOfPlayers;
	for (int i = 0; i < aux; ++i)
	{
		for (int j = 0; team[i].name[j] != '\0'; ++j)
		{
			if (toupper(team[i].name[j]) == toupper(*letter))
			{
				for (int k = i; k < aux; ++k)
				{
					team[k] =team[k+1];
				}
				--aux;
				--i;
				if (aux == 0)
				{
					free(team);
					return aux;
				}
				team = (player*)realloc(team, (aux * sizeof(player)));
			}
		}
	}
	
	return aux;
}