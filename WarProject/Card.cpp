#include "Card.h"
#include <iostream>
#include <string>
using namespace std;

Card::Card()
{

}

Card::Card(char s, char r)
{
	suit = s;
	rank = r;
}

int Card::getValue()
{
	int specialRank;
	if (rank == 'A')
	{
		specialRank = 1;
	}
	else if (rank == 'J' || rank == 'Q' || rank == 'K' || rank == 'T')
	{
		specialRank = 10;
	}
	else
	{
		specialRank = rank - '0';
	}
	return specialRank;

}
void Card::displayCard()
{
	char suitSym;

	if (suit == 'H')
	{
		suitSym = (char)3;
	}
	else if (suit == 'D')
	{
		suitSym = (char)4;
	}
	else if (suit == 'C')
	{
		suitSym = (char)5;
	}
	else if (suit == '\S')
	{
		suitSym = (char)6;
	}

	if (rank == 'A')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[       ]" << endl;
		cout << "[       ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[       ]" << endl;
		cout << "[       ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == '2')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[       ]" << endl;
		cout << "[       ]" << endl;
		cout << "[       ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == '3')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[       ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[       ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == '4')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[       ]" << endl;
		cout << "[       ]" << endl;
		cout << "[       ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == '5')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[       ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[       ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == '6')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[       ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[       ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == '7')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[       ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == '8')
	{
		cout << "[-------]" << endl;
		cout << "[" << suitSym << "      ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == '9')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[   " << suitSym << "   ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == 'T')
	{
		cout << "[-------]" << endl;
		cout << "[10     ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[     10]" << endl;
		cout << "[-------]" << endl;
	}
	else if (rank == 'J' || rank == 'Q' || rank == 'K')
	{
		cout << "[-------]" << endl;
		cout << "[" << rank << "      ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[  " << suitSym << " " << suitSym << "  ]" << endl;
		cout << "[      " << rank << "]" << endl;
		cout << "[-------]" << endl;
	}
}

char Card::getChar()
{
	return suit;
}

