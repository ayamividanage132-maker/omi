#ifndef CARD_H
#define CARD_H

#define TOTAL_CARDS 32

// Structure to store one playing card
struct Card
{
	char rank[6];
	int suit;
};

// Function to create all 32 cards
void createDeck(struct Card deck[]);

// Function to shuffle the deck
void shuffleDeck(struct Card deck[]);

// Function to display cards
void displayCard(struct Card card);

#endif       
