
  #include <stdio.h>
#include "game.h"


/* Display the teams and players */
void displayTeams(void)
{
    printf("Teams and Players\n");
    printf("-----------------\n");

    printf("Team 1:\n");
    printf("Player 1 (You)\n");
    printf("Player 3 (Computer)\n\n");

    printf("Team 2:\n");
    printf("Player 2 (Computer)\n");
    printf("Player 4 (Computer)\n\n");
}

/* Deal the first 4 cards to each player */
void dealCards(Card deck[], Card hands[][HAND_SIZE])
{
    int deckIndex = 0;

    for (int c = 0; c < FIRST_DEAL; c++)
    {
        for (int p = 0; p < TOTAL_PLAYERS; p++)
        {
            hands[p][c] = deck[deckIndex];

            deckIndex++;
        }
    }
}


/* Let Player 1 select the trump suit */
char selectTrump(void)
{
    int choice;
    char trump;

    printf("\nSelect the trump suit:\n");
    printf("1. Hearts   \n");
    printf("2. Diamonds \n");
    printf("3. Clubs    \n");
    printf("4. Spades   \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nTrump selected: ");

if (trump == 'H')
{
    printf("Hearts\n");
}
else if (trump == 'D')
{
    printf("Diamonds\n");
}
else if (trump == 'C')
{
    printf("Clubs\n");
}
else
{
    printf("Spades\n");
}

    while (choice < 1 || choice > 4)
    {
        printf("Invalid choice! Enter 1 to 4: ");
        scanf("%d", &choice);
    }

   
}


/* Deal the remaining 4 cards to each player */
void dealRemainingCards(Card deck[], Card hands[][HAND_SIZE])
{
    int deckIndex = TOTAL_PLAYERS * FIRST_DEAL;

    for (int c = FIRST_DEAL; c < HAND_SIZE; c++)
    {
        for (int p = 0; p < TOTAL_PLAYERS; p++)
        {
            hands[p][c] = deck[deckIndex];

            deckIndex++;
        }
    }
}


/* Start the game */
void startGame(void)
{
    Card deck[DECK_SIZE];

    Card hands[TOTAL_PLAYERS][HAND_SIZE];

    char trump;

    printf("================================\n");
    printf("       WELCOME TO OMI GAME\n");
    printf("================================\n\n");

    /* Display teams */
    displayTeams();

        /* Display deal number */
    printf("--------------------------------\n");
    printf("             DEAL NO. 1\n");
    printf("--------------------------------\n\n");

    /* Create and shuffle the deck */
    createDeck(deck);

    shuffleDeck(deck);

    /* Deal the first 4 cards */
    dealCards(deck, hands);

    printf("Your first 4 cards:\n");
    printf("-------------------\n");

    displayCards(hands[0], FIRST_DEAL);

    /* Select trump */
    trump = selectTrump();

    /* Deal the remaining 4 cards */
    dealRemainingCards(deck, hands);

    printf("\nYour complete hand of 8 cards:\n");
    printf("------------------------------\n");

    displayCards(hands[0], HAND_SIZE);
    
    /* Display trick number */
    printf("\n--------------------------------\n");
    printf("             TRICK NO. 1\n");
    printf("--------------------------------\n");

}
