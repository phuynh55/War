#pragma once
#ifndef CARD_H
#define CARD_H

class Card
{
public:
	Card(char s, char r);
	Card();
	int getValue();
	void displayCard();
	char getChar();
private:
	char suit;
	char rank;
};



#endif
