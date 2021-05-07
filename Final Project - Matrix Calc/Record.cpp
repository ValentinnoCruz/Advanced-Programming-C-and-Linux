
#include <fstream>
#include "Record.h"

//Constructor
Record::Record(string s, int n) {
    init();
    pushRec(s,n);
}

//destructor
Record::~Record() {
    float ave=0;
    float median;
    vector<int> vec;
    set<int> s;
    set<int>::iterator pos;//iterator for set
    map<int,int> m;
    int temp;
    //output the updated record to the file
    fstream outFile("Record.txt",ios::out);
    if(!outFile.fail()) {
        outFile<<name.getSize()<<endl;
        for(int i=0;i<name.getSize();i++) {
            outFile<<name[i]<<" ";
            temp=corrAns[i];
            ave+=temp;
            outFile<<temp<<" "<<endl;
            vec.push_back(temp);
            if(s.insert(temp).second) m.insert(pair<int, int>(temp, 0));
        }
        sort(vec.begin(),vec.end());
        int n=vec.size();
        //get the average
        ave/=n;
        //Get the median
        if(n%2==1) {
            median=vec[n/2];
        } else {
            median=(vec[n/2]+vec[n/2-1])/2.0f;
        }
        //Get the mode
        set<int> mode;
        int times=0;
        int ones=0;
        for(int i=0;i<n;i++) {
            m[vec[i]]++;
        }
        for(pos=s.begin();pos!=s.end();pos++) {
            //Get the mode from the map
            if(m[*pos]>times) {
                mode.clear();
                mode.insert(*pos);
                times=m[*pos];
            } 
            if(m[*pos]==times) {
                mode.insert(*pos);
            }
            if(m[*pos]==1) {
                ones++;
            }
        }
        //Output The statistics of the record
        cout<<endl<<"**********************************\n";
        cout<<"The statistics of the record: \n";
        cout<<"Average: "<<ave<<endl;
        cout<<"Median: "<<median<<endl;
        if(ones==s.size()) {
            cout<<"There is no mode";
        } else {
            cout<<"Mode: ";
            for(pos=mode.begin();pos!=mode.end();++pos) {
                cout<<*pos<<"  ";
            }
        }
    cout<<endl;
    cout<<"**********************************\n";
    }
    outFile.close();
}

//add record
void Record::pushRec(string s, int n) {
    name.append(s);
    corrAns.append(n);
    //sort the record with quick sort
    quickSort(name,corrAns,0,name.getSize()-1);
}

//Quick sort
void Record::quickSort(LnkList<string> &nm, LnkList<int> &cr, int beg, int end) {
    int p;
    if(beg<end) {
        p=pivot(nm,cr,beg,end);
        quickSort(nm,cr,beg,p-1);
        quickSort(nm,cr,p+1,end);
    }
}

//get the pivot
int Record::pivot(LnkList<string> &nm,LnkList<int> &cr, int beg, int end) {
    int p=beg;
    int pivotValue=cr[beg];
    for(int i=beg+1;i<=end;i++) {
        if(cr[i]>pivotValue) {
            p++;
            swap(cr[i],cr[p]);
            swap(nm[i],nm[p]);
        }
    }
    swap(cr[beg],cr[p]);
    swap(nm[beg],nm[p]);
    return p;
}

//initialize the class
void Record::init() {
    //import the data from the file
    fstream inFile("Record.txt",ios::in);
    string s;
    int size,n;
    if(!inFile.fail()) {
        inFile>>size;
        for(int i=0;i<size;i++) {
            inFile>>s;
            inFile>>n;
            name.append(s);
            corrAns.append(n);
        }
    }
    inFile.close();
}

//display the record
void Record::disRec() {
    cout<<"Rank#     Name     Record"<<endl;
    //Need to improve: align the name and number of correct answer
    for(int i=0;i<name.getSize();i++) {
        cout<<"  "<<(i+1)<<"      "<<name[i]<<"      "<<corrAns[i]<<endl;
    }
}