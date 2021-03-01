#pragma once
#include<iostream>
#include<string>

using namespace std;

/* ==============================================
					BagOfMarbles struct
=============================================== */

#ifndef _BagOfMarbles_
#define _BagOfMarbles_

struct BagOfMarbles {
	int size;
	int types[5] = {0};
	BagOfMarbles(int[],int);
	int pick();
	void print();
};

#endif

/* ==============================================
	Implementation of BagOfMarbles functions 
=============================================== */

/* 
* Parameterized constructor that initializes the types[] array
* with respect to marbels[] array give in the parameter
* if marbles[] array contains a type other than 0-4 it does not count it
*/
BagOfMarbles::BagOfMarbles(int marbles[],const int size) {
	this->size = size;
	for (int i = 0; i < size; i++) {
		if (marbles[i] >= 0 && marbles[i] <= 4)
			types[marbles[i]]++;
		else
			this->size--;
	}
}

/* It prints the types[] array of bag of marbles in proper format */
void BagOfMarbles::print() {
	cout << "Total marbles: " << size << endl;
	cout << "no of marbles of each type: " << endl;
	for (int i = 0; i < 5; i++)
		cout << i << " -> " << types[i] << endl;
	cout << endl;
}

/* It picks a marble randomly from the bag of marbles */
int BagOfMarbles::pick() {
	// Checks if bag is empty or not
	if (size == 0) {
		return - 1;
	}
	int picked;
	// picking a marble of random type
	do {
		picked = rand() % 5;	
	} while (types[picked] == 0);

	// after picking marbel decrementing the count of that marbel type from the list
	types[picked]--;
	// decrementing the count of marbles in the bag
	size--;
	// return the type of marble that picked
	return picked;
}