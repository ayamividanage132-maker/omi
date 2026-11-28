#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "card.h"
#include "game.h"

int main(void)
{
    Card deck[DECK_SIZE];
    Player players[PLAYER_COUNT];

    srand(time(NULL));

    displayWelcome();
    displayTeams();

    printf("\n------------------------------\n");
    printf("          DEAL NO. 1\n");
    printf("------------------------------\n");

    createDeck(deck);
    shuffleDeck(deck);

    dealCards(deck, players);

    printf("\nYour first 4 cards:\n");
    displayCards(players[0].hand, 4);

    selectTrump();

    return 0;
}
