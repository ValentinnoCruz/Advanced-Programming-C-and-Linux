#include <iostream>

using namespace std;

int profit(int* prices, int size, int money){


	// order of complexity is O(n^2) because line 75 repeats n times and 
	// inside that loop we have another loopthat repeats n times,so that's n*n = n^2

	//max profit
	int maxp = 0;

	//how much it cost me when the profit hits
	int cost = 0;

	// double loop
	// i = bought price
	// j = sold price
	for (int i = 0; i < size-1; i++)

	//to compare the bought number to what remains. (if we wanted to start at a nother number we would change the 1)
		for (int j = i+1; j < size; j++){
			cout << prices[i] << " " << prices[j] << endl;

			// if it true the price of j - price i > maxprice
			//then maxp = prices [j] - prices[i]
			if (prices[j] - prices[i] > maxp){
				maxp = prices[j] - prices[i];
				//what it cost me is the [i]
				cost = prices[i];
			}
		}
	}

	
	//if we didnt get a profit
	if (cost == -1){
		return 0;
	}

	int shares = money / cost;

	return maxp * shares;

}

/*
int main(){
	int prices[7] = {7, 1, 5, 3, 6, 4, 5};    // if we buy at 7 we cant make a profit,
										     // if we buy at 1 we can make profit by selling at 5, 6, 4 etc. 
											// the highest profit if bought at 1 would be 5 by selling at 6
	cout << profit(prices, 7, 10) << endl;
	return 0;
}
*/


// =====      ======
// =====      ======
// ===== ex 2 ======
// =====      ======
// =====      ======

int main(){
	// int prices[7] = {7, 6, 5, 4, 3, 2, 1};

	// cout << profit(prices, 7, 10) << endl;

	int prices[19] = {200, 191, 308, 286, 442, 372, 429, 585, 695, 661, 880, 793, 852, 781, 597, 693, 618, 739, 680};

	cout << profit(prices, 19, 1000) << endl;

	return 0;
}



/* this will reverse it when the cose go from high-ish to low

int main(){
	int prices[7] = {7, 6, 5, 4, 3, 2, 1};

	cout << profit(prices, 7, 10) << endl;

	return 0;
}
*/




//==================              ==================
//==================              ==================
//================== Instructions
//==================              ==================
//==================              ==================


// a double for loop is n^n


/*

Instructions
============

make a folder names april_29 in your classwork folder. Create a C++ file named driver.cpp and write all your code in it.

Problem Statement
=================

Suppose we have obtained some data on the future prices of a particular stock. The prices are represented as a sequence of integers. You are also given the amount of starting capital. Find the maximum amount you can make by choosing the best time to buy stocks, and a future point in time to sell. You need to report the amount of money you made after completing the transactions. It may happen that there is never a good time to buy, or sell, in which case you do not make the transactions and your profit is $0;

Function Signature
==================

int profit(int* prices, int size, int money)

the first argument is the array of stock prices, and the second is the size of that array.
the third argument is the amount of money that you start with

Example 1
=========

Input:
{7, 1, 5, 3, 6, 4, 5}, 7, 10

Output:
50

Explanation:
In this example we are starting with $10. We can see from the prices list that the best time to buy is at $1 (position 1), and the best time to sell is at $6 (position 4). 

So with our $10 we buy at $1 so we have 10 shares. Later, we sell the 10 shares at $6 each, which gets us $60, so that's a profit of $50.


Example 1
=========

Input:
{7, 6, 5, 4, 3, 2, 1}, 7, 10

Ouput:
0

Explanation:
In this case the prices are always decreasing so it's not possible to buy a stock at any time and sell it for a profit later. Therefore our profit is $0.

Written component
=================

- Give a high level description of your solution.

- What is the order of complexity of your solution? Explain how you calulated the order of complexity by referring to specific lines of your code.


*/