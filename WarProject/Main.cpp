//Phillips Huynh
//CECS 282
//Prog 1 - TwoCardWarGame
//Due 2/8/2016
#include <iostream>
#include "Card.h"
#include "CardDeck.h"
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int count = 52;
	char number;
	string response;
	CardDeck d1;
	d1.shuffle();

	do
	{
		cout << "1) Get a new card deck " << "\n2) Show all cards in the deck" << "\n3) Shuffle" << "\n4) Play WAR!" << "\n5) Exit" << endl;
		cin >> number;
		switch (number)
		{
		case '1':
		{
			CardDeck d2;
			d1 = d2;
			cout << "You have a new deck" << endl;
			break;
		}
		case '2':
		{
			if (d1.cardsLeft() == 0)
			{
				cout << "You cannot display cards of an empty deck! Get a new deck!" << endl;
			}
			else
			{
				for (int i = 0; i < count; i++)
				{
					d1.displayCardAt(i);
				}
			}
			break;
		}
		case '3':
		{
			if (d1.cardsLeft() == 0)
			{
				cout << "You cannot shuffle an empty deck!" << endl;
			}
			else
			{
				d1.shuffle();
				cout << "You deck is shuffled." << endl;
			}
			break;
		}
		case '4':
		{
			do
			{
				if (d1.cardsLeft() != 0)
				{
					Card c1;
					Card c2;
					Card c3;
					Card c4;
					int pTotal;
					int oTotal;
					cout << "...dealing" << endl;
					cout << "One for you..." << endl;
					c1 = d1.deal();
					cout << "You play " << endl;
					c1.displayCard();
					cout << "One for me..." << endl;
					c2 = d1.deal();
					cout << "I play" << endl;
					c2.displayCard();
					cout << "Two for you..." << endl;
					c3 = d1.deal();
					cout << "You play" << endl;
					c3.displayCard();
					cout << "Two for me..." << endl;
					c4 = d1.deal();
					cout << "I play" << endl;
					c4.displayCard();
					pTotal = c2.getValue() + c4.getValue();
					oTotal = c1.getValue() + c3.getValue();
					cout << "I have " << pTotal << " points." << endl;
					cout << "You have " << oTotal << " points." << endl;
					if (pTotal > oTotal)
					{
						cout << "I win" << endl;
					}
					else if (pTotal < oTotal)
					{
						cout << "I lost" << endl;
					}
					else
					{
						cout << "Tie game, another round!" << endl;
					}
					cout << "There are " << d1.cardsLeft() << " cards left." << endl;
					if (d1.cardsLeft() == 0)
					{
						cout << "You are out of cards, request a new deck." << endl;
					}
					else
					{
						cout << "Play again? Y/N" << endl;
						cin >> response;
					}
				}
				else
				{
					cout << "Request a new deck!" << endl;
				}
			} while (response == "Y" && d1.cardsLeft() != 0);
			break;
		}
		case '5':
		{
			cout << "Terminating program..." << endl;
			EXIT_SUCCESS;
			break;
		}
	
		}

	} while (number != '5');
	return 0;
}