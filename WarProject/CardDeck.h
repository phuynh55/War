#pragma once
#ifndef CARDDECK_H
#define CARDDECK_H
#include "Card.h"

class CardDeck
{
	public:
		CardDeck();
		void displayCardAt(int i);
		Card deal();
		int cardsLeft();
		void shuffle();
	private:
		int count;
		Card data[52];

};

#endif