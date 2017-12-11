#include "CardDeck.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

CardDeck::CardDeck()
{
	count = 52;
	string rankSym = "A23456789TJQK";
	string suitSym = "SCDH";

	for (int i = 0; i < count; i++)
	{
		data[i] = Card(suitSym[i % 4], rankSym[i % 13]);
	}
}

void CardDeck::displayCardAt(int i)
{
	int position = i - 1;
	data[position].displayCard();
}

void CardDeck::shuffle()
{
	srand(time(0));
	int i = 1;
	while (i < count)
	{
		int x, y;
		x = rand() % count;
		y = rand() % count;
		Card temp = data[x];
		data[x] = data[y];
		data[y] = temp;
		i++;
	}
}

Card CardDeck::deal()
{
	return data[--count];
}

int CardDeck::cardsLeft()
{
	return count;
}

