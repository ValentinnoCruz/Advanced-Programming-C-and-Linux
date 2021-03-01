#include<ctime>
#include"BagOfMarbles.h"

int main() {
	srand(time(0));

	/*------------------ test case 1 ---------------*/
	const int count = 20;
	int marbles1[count] = { 0,4,4,4,4,2,4,1,3,1,3,4,2,1,0,0,3,4,3,3 };
	BagOfMarbles myBag = BagOfMarbles(marbles1, count);
	myBag.print();
	int picked = myBag.pick();
	if (picked != -1)
		cout << "Marbel of type " << picked << " picked" << endl << endl;
	else
		cout << "Bag is empty" << endl<<endl;
	myBag.print();

	/*------------------ test case 2 ---------------*/

	int marbles[count] = { 0,4,4,4,4,5,6,-1,3,1,3,8,2,1,9,0,3,4,3,3 };
	myBag = BagOfMarbles(marbles, count);
	myBag.print();
	picked = myBag.pick();
	if (picked != -1)
		cout << "Marbel of type " << picked << " picked" << endl << endl;
	else
		cout << "Bag is empty" << endl << endl;
	myBag.print();
	cout << "count: " << count << endl;
	
	/*------------------ test case 3 ---------------*/
	int marbles2[count] = { 4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4 };
	myBag = BagOfMarbles(marbles2, count);
	myBag.print();
	picked = myBag.pick();
	if (picked != -1)
		cout << "Marbel of type " << picked << " picked" << endl << endl;
	else
		cout << "Bag is empty" << endl << endl;
	myBag.print();

	/*------------------ test case 4 ---------------*/
	int marbles3[count];
	myBag = BagOfMarbles(marbles3, count);
	myBag.print();
	picked = myBag.pick();
	if (picked != -1)
		cout << "Marbel of type " << picked << " picked" << endl << endl;
	else
		cout << "Bag is empty" << endl << endl;
	myBag.print();

	return 0;
}