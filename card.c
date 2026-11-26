#include <stdio.h>
#include <stdlib.h>
#include "card.h"

// Populates the 32-card deck with all combinations of 4 suits and 8 ranks (7 to Ace)
void createDeck(Card deck[]) {
    char suits[] = {'H', 'D', 'C', 'S'}; // Hearts, Diamonds, Clubs, Spades
    int index = 0;

// Go through all 4 suits and 8 card numbers (7 to Ace) to build the 32-card deck
    for (int s = 0; s < 4; s++) {
        for (int r = 7; r <= 14; r++) {
            deck[index].suit = suits[s]; // Set the suit of the card
            deck[index].rank = r;        // Set the number/rank of the card
            index++;                     // Move to the next empty spot in the deck
        }
    }
}

// Randomly shuffles the 32-card deck using the Fisher-Yates algorithm
void shuffleDeck(Card deck[]) {
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1); // Pick a random index from 0 to i
         
	Card temp = deck[i];
	deck[i] = deck[j];
	deck[j] = temp;
    }
}

// Displays 'count' cards line by line
void displayCards(Card cards[], int count) {
    for (int i = 0; i < count; i++) {
        // Print selection number,, etc. when showing a hand of multiple cards
        if (count > 1) {
            printf("%d ", i + 1);
        }

        // Convert numeric rank (11-14) into face card names; print 7-10 as numbers
        switch (cards[i].rank) {
            case 11: printf("Jack"); break;
            case 12: printf("Queen"); break;
            case 13: printf("King"); break;
            case 14: printf("Ace"); break;
            default: printf("%d", cards[i].rank); break;
        }

        printf(" of ");

        // Convert suit letter ('H', 'D', 'C', 'S') into full suit name
        switch (cards[i].suit) {
            case 'H': printf("Hearts"); break;
            case 'D': printf("Diamonds"); break;
            case 'C': printf("Clubs"); break;
            case 'S': printf("Spades"); break;
        }

        printf("\n"); // Move to the next line after each card
    } 
}
