
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>




/* ==============================================
		Card struct
=============================================== */

#ifndef _CARDS_
#define _CARDS_


struct Card {
	std::string index;
	std::string suit;
	Card();
	Card(std::string, std::string);
	void print();
};


/* ==============================================
					Deck struct
=============================================== */


struct Deck {
	std::string suits[4] = { "Clubs","Diamonds","Hearts","Spades" };
	std::string indexes[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	Card deck[52];

	Deck();
	void revealTop();
	void revealTop(int);
	void Shuffle();
	void printDeck();
};

#endif

/* ==============================================
		Card functions implementation
=============================================== */


/* Default construtor */
Card::Card() {
	index = "";
	suit = "";
}

/* Parameterized constructor*/
Card::Card(std::string index, std::string suit) {
	this->index = index;
	this->suit = suit;
}

/* Prints the card info in proper format */
void Card::print() {
	std::cout << index << ' ' << suit << std::endl;
}

/* ==============================================
		Deck functions implementation
=============================================== */

/* Default construtor */
Deck::Deck() {
	int k = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++, k++) {
			deck[k].suit = suits[i];
			deck[k].index = indexes[j];
		}
	}
}

/* It reveals the first card from the top of the Deck */
void Deck::revealTop() {
	deck[0].print();
}

/* It reveals 'n' cards from the top of the Deck */
void Deck::revealTop(int n) {
	if (n >= 0 || n <= 52)
		for (int i = 0; i < n; i++)
			deck[i].print();
	else
		std::cout << "Deck index out of bound" << std::endl;
}

/* It swaps the cards */
void swap(Card& c1, Card& c2) {
	Card temp = c1;
	c1 = c2;
	c2 = temp;
}

/* It shuffles the deck randomly */
void Deck::Shuffle()
{
	srand(time(0));
	int a, b;
	for (int i = 0; i < 50; i++) {
		a = rand() % 52;
		b = rand() % 52;
		swap(deck[a], deck[b]);
	}
}

/* It prints the all cards info of the deck */

void Deck::printDeck() {
	for (int i = 0; i < 52; i++)
		deck[i].print();
}