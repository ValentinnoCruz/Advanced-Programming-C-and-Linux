# Monopoly Empire

1. **Introduction**
In mathematics, a matrix (plural matrices) is a rectangular array—of numbers, symbols, or expressions, arranged in rows and columns—that is interpreted and manipulated in certain prescribed ways. One such way is to state the dimensions of the matrix.

In this program, the main program is the calculator including function add/ subtract /multiply two matrices, and the transpose, determinant, and inverse of matrix. In addition, there is an easy matrix game for users to play.

## Summary
This game contains most concepts that we have learned in the class. I have my own Linked List template class which is used in Record Class. There are also file stream and quick sort in Record Class. I use the STL library to get a statistic of all the records. In the Matrix Class, I use recursion to solve the determinant problems. I use the 2-dimention array to store the matrix.


## Concepts Covered

|Concept |Type|Code| Location(line)|
| :-: | :-: | :-: | :-: |
| Linked List	| LnkList<T>	| LnkList<string> name;	| 23 in Record.h|
| File i/o	| fstream	| fstream |inFile("Record.txt",ios::in);	| 125 in Record.cpp|
| Sort	|	| void quickSort(LnkList<string> &,LnkList<int> &,int,int);	| 27 in Record.h|
| Template function	| template <class T>	| template <class T> void swap(T &a,T &b)	| 31 in Record.h|
| Constructor	|	| Matrix(int,int,int **,string);	| 30 Record.h|
| Destructor	|	| ~Matrix();	| 32 Record.h|
| 2-d array	| int **	|	| 19 Record.h|
| STL <vector>	| vector<int>	| vector<int> vec;	| 21 Record.cpp|
| STL <set>	| set<int> 	| set<int> s;	| 22 Record.cpp|
| Iterator	| set<int> ::       iterator 	| set<int>::iterator pos;	| 23 Record.cpp|
| STL<map>	| map<int,int> 	| map<int,int> m;	| 24 Record.cpp|
| Recursion	|	| In the determinant function, call determinant(temp,tRow) 	| 342 Matrix.cpp|
| Recursion	|	| In the Quick Sort	| 101 Record.cpp|
| Operator Overloading | | Void operator=(const Matrix &right); | 54 in Matrix.h|
|Sort |Quick Sort |void Record::quickSort(LnkList<string> &nm, LnkList<int> &cr, int beg, int end) { int p;  if(beg<end) { p=pivot(nm,cr,beg,end); quickSort(nm,cr,beg,p-1); quickSort(nm,cr,p+1,end); } } | 97 Record.cpp
| Operator Overloading | | Void Operator=(Const Matrix &right); | 54 in Matrix.h

