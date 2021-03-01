#include <iostream>
#include <string>
#include <sstream>
#include "RandomSupport.h"
#include "TimeSupport.h"

using namespace std;

std::string humanize(int x){
	std::string result;
	std::ostringstream ss;

	if (x >= 1000000000){
		float bill = x / 1000000000.0;

		ss << bill;
		std::string s(ss.str());
		result = s + " billion";
	}
	else if (x >= 1000000){
		float mill = x / 1000000.0;

		ss << mill;
		std::string s(ss.str());
		result = s + " million";
	}
	else{
		ss << x;
		std::string s(ss.str());
		result = s;
	}

	return result;
}

int findMinPos(int* arr, int start, int end){
	int min = arr[start];
	int minPos = start;

	for(int i = start+1; i <= end; i++){
		if (arr[i] < min){
			min = arr[i];
			minPos = i;
		}
	}

	return minPos;
}

void selection_sort(int* arr, int start, int end){
	for (int i = start; i <= end; i++){
		int minPos = findMinPos(arr, i, end);
		int temp = arr[i];
		arr[i] = arr[minPos];
		arr[minPos] = temp;
	}
}


bool search (int key, int* arr, int start, int end){
	for (int i = start; i <= end; i++){
		if (key == arr[i]){
			return true;
		}
	}

	return false;
}



int main(){

	const int size = 2000000;

	int* arr = new int[size]; // Array is on the heap. Always do that


	RNG rand(0, (size*10)-1);

	for (int i = 0; i < size; i++){
		arr[i] = rand.get();
	}

	// // for (int i = 0; i < size; i++){
	// // 	cout << arr[i] << " ";
	// // }
	// // cout << endl;

	timestamp start = current_time();

	bool temp = search(-1, arr, 0, size - 1);

	timestamp end = current_time();

	int duration = time_diff(start, end);

	cout << "Size: " << humanize(size) << endl;

	cout << "Time: " << duration << " ms." << endl;

	delete[] arr; // Release the memory we allocated earlier

	return 0;
}
