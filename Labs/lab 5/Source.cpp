#include"Cards.h";

int main() {
	Deck myCards;
	myCards.Shuffle();
	myCards.revealTop(5);
	return 0;
}