#ifndef E3
#define E3

typedef struct 
{
	char name[50];
	int number;
	float weight;
	int height;
}player;

void reserveMemoryforStruct(player **team, int *numberOfPlayers);
player fillInPlayerData();
void addTeam(player team[], int *numberOfPlayers);
void printTeam(player team[], int *numberOfPlayers);
int removePlayerWhoseNameContainsX(player team[], int *numberOfPlayers, char *letter);


#endif