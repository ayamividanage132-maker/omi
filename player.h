#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"  // Include the Card structure

#define TOTAL_PLAYERS 4   // Total number of players
#define MAX_HAND_SIZE 8   // Maximum cards each player can hold

// Structure to store player information
struct Player
{
    int playerNumber;  // Stores the player's number (1-4)

    int team;          // Stores the team number (1 or 2)

    struct Card hand[MAX_HAND_SIZE]; 
    // Array to store the player's cards

    int handSize;      // Stores the current number of cards in the hand

