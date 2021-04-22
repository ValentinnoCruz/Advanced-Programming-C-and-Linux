#include <iostream>
#include "search.h"

using namespace std;

int search(int key, int arr[], int size);

int main() {
    int arr[] = {1, 3, 4, 7}, size = 4;
    cout << search(2, arr, size) << endl;
    cout << search(5, arr, size) << endl;
    cout << search(6, arr, size) << endl;
    cout << search(9, arr, size) << endl;

    return 0;
}