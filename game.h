#ifndef GAME_H
#define GAME_H

#include "card.h"

#define PLAYER_COUNT 4
#define HAND_SIZE 8

// Structure to store player information
typedef struct
{
    int playerNo;
    Card hand[HAND_SIZE];
} Player;

// Function declarations
void displayWelcome(void);
void displayTeams(void);
void dealCards(Card deck[], Player players[]);
void selectTrump(void);

#endif
