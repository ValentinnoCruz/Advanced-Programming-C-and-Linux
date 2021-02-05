#include <iostream>
#include <random>
#include <cmath>

using namespace std;

void print_table(int* freq_good, int* freq_bad){
	cout << "*----------------------------------------*" << endl;
	cout << "|  Value | 0  1  2  3  4  5  6  7  8  9  |" << endl;
	cout << "|----------------------------------------|" << endl;

	cout << "|  Good  |";
	for (int i = 0; i < 10; i++){
		int f = round(freq_good[i]/10000.0);
		if (f < 10) cout << " ";
		cout << f << " ";
	}
	cout<< " |" << endl;
	
	cout << "|  Bad   |";
	for (int i = 0; i < 10; i++){
		int f = round(freq_bad[i]/10000.0);
		if (f < 10) cout << " ";
		cout << f << " ";
	}
	cout<< " |" << endl;
	cout << "*----------------------------------------*" << endl;
}

int main(){

	// This program illustrates the differences between the rand() % n - The Bad
	// and the mt19937 random number generator - The Good

	// For both methods we will ask them to generate integers from 0 to 9.
	// We will do it 100,000 times and we will keep track of how many times each possible value was generated

	int freq_bad[10] = {0};
	int freq_good[10] = {0};


	// To simulate the real situation accurately, we put the seeding phase inside the loop because we want to set the seed before each
	// time we generate. This most accurately depicts the process of us using your programs because we run your program 
	// hundreds of thousands of times per second to test it.

	// When your program is executed each time, it sets the seed, it generates a random number, and it terminates
	// Then the process repeats

	// Below is the method of using the mt19937 random number generator, which is part of the C++ standard library
	// This is the preferred way of doing it.

	for (int i = 0; i < 100000; i++){
		std::random_device rd;
		std::mt19937 rng(rd());
		std::uniform_int_distribution<int> uni(0, 9);
		int n = uni(rng);

		freq_good[n]++;
	}

	// Here is the srand(time(NULL)) method. If you could pull that line outside the loop, the rand() function will
	// behave better, but you can not pull it out and have a consistent seed between different executions of your program,
	// so it stays inside the loop.

	for (int i = 0; i < 100000; i++){
		srand (time(NULL));
		int r = rand() % 10;
		freq_bad[r]++;
	}

	// Here we print the table of results. It shows the number of times a value is generated out of 10 attempts, on average.
	// I ran the code and it looked like this:

	// *----------------------------------------*
	// |  Value | 0  1  2  3  4  5  6  7  8  9  |
	// |----------------------------------------|
	// |  Good  | 1  1  1  1  1  1  1  1  1  1  |
	// |  Bad   | 0  0 10  0  0  0  0  0  0  0  |
	// *----------------------------------------*

	// The results show that in 10 trials, each value is likely to be generated once by the preferred method, which makes sense
	// The non-preferred method, is likely to generate the same value every time. That's why this method is not preferred.
	
	print_table(freq_good, freq_bad);

	return 0;
}