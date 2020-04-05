#include <stdio.h>
#include <stdlib.h>
#include "E3.h"

int main()
{
	player *team;
	char letter, c;
	int numberOfPlayers;
	reserveMemoryforStruct(&team, &numberOfPlayers);
	addTeam(team, &numberOfPlayers);
	printTeam(team, &numberOfPlayers);
	printf("\nIntroduzca la letra que contienen los nombres de los jugadores que desea eliminar\n");
	letter = getchar();
	while((c= getchar()) != '\n' && c != EOF);	
	numberOfPlayers = removePlayerWhoseNameContainsX(team, &numberOfPlayers, &letter);
	printTeam(team, &numberOfPlayers);
	free(team);
	return 0;
}