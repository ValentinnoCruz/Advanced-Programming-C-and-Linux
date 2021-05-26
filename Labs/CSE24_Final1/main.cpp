#include <iostream>

using namespace std;

int* merge(int* first, int* second, int size1, int size2){
	// Your code here
        // allocate result on heap big enough for totalsize:size1+size2
	int totalSize = size1 + size2;

	int* result = new int[totalSize];

	int p1 = 0;
	int p2 = 0;

        // for i - o to total size:
        //      if first is done 
        //          take from list2
        // else if second is done
        //      take from list2
        // else:
        //      both first and second are not done
	for (int i = 0; i < totalSize; i++){
		if (p1 >= size1){
			// first is done
			result[i] = second[p2];
			p2++;
		}
		else if (p2 >= size2){
			// second is done
			result[i] = first[p1];
			p1++;
		}
		else {
			// neither list is done
			if (first[p1] <= second[p2]){
				result[i] = first[p1];
				p1++;
			}
			else{
				result[i] = second[p2];
				p2++;
			}
		}
	}

	return result;
}

int main(){
	const int oddSize = 5;
	const int evenSize = 5;
	int odds[oddSize] = {1, 3, 5, 7, 9};
	int evens[evenSize] = {2, 4, 6, 8, 10};

	int* result = merge(odds, evens, oddSize, evenSize);

	for (int i = 0; i < oddSize + evenSize; i++){
		cout << result[i];
		if (i < oddSize + evenSize - 1){
			cout << ", ";
		}
	}
	cout << endl;

	delete[] result;

	return 0;
}