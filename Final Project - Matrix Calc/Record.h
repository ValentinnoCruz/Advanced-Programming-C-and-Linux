

#ifndef RECORD_H
#define	RECORD_H

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <iterator>

#include "LnkList.h"
using namespace std;

class Record {
    private:
        LnkList<string> name;//Name of players
        LnkList<int> corrAns;//count of correct answer
        void init();//Initialize the class
        //quick sort
        void quickSort(LnkList<string> &,LnkList<int> &,int,int);
        //get the pivot (used in quick sort)
        int pivot(LnkList<string> &,LnkList<int> &,int,int);
        //template for swap
        template <class T>
        void swap(T &a,T &b) {
            T temp=a;
            a=b;
            b=temp;
        }
        
    public:
        //Default constructor
        Record() {init();}
        //Constructor
        Record(string,int);
        //Destructor
        ~Record();
        void pushRec(string,int);//push record
        void disRec();//display record
};

#endif	/* RECORD_H */

