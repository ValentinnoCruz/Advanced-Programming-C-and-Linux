//system libraries
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

//user libraries
#include "Matrix.h"
#include "LnkList.h"
#include "Record.h"

//Function
void mainMenu();
void menu();//sub-menu for calculator
int **getArray(int &,int &);//Get the array from the user
int **rndmArr(int,int);//randomly fill the array
void game();
void calculator();

int main(int argc, char** argv) {
    //set seed for random number
    srand(static_cast<unsigned int>(time(0)));
    //menu for the program
    char ch1;
    do {
        do {
            mainMenu();
            cout<<"You choose(0-2): ";
            cin>>ch1;
            if(ch1!='0'&&ch1!='1'&&ch1!='2') {
                    cout<<"Invalid input"<<endl;
            } 
        } while(ch1!='1'&&ch1!='2'&&ch1!='0');
        if(ch1=='1') {
            calculator();
        } else if(ch1=='2') {
            game();
        }
        if(ch1!='0') {
            cout<<"Click Enter to continue...";
            cin.ignore();
        }
    } while(ch1!='0');

}

void game() {    
    cout<<"GAME TIME"<<endl;
    cout<<"You will have 5 matrix problems to solve"<<endl;
    int correct=0;
    //5 chances
    for(int i=1;i<=5;i++) {
        cout<<endl<<"Problem #"<<i<<": "<<endl;
        int temp=rand()%2+1;
        //cout<<"Temp: "<<temp<<endl;
        //randomly choose a problems with random 2*2 matrix
        switch(temp) {
            case 1: {
                int ans;//answer from player
                //Find determinant
                int **array=rndmArr(2,2);
                Matrix m(2,2,array,"");
                m.display();
                cout<<"The determinant: ";
                cin>>ans;
                if(ans==m.getDet()) {
                    cout<<"You got it"<<endl;
                    correct++;
                } else cout<<"You are wrong"<<endl;
                break;
            }
            case 2: {
                int **ans=rndmArr(2,2);//answer from player
                //Find the matrix that multiplied by a matrix and a number
                int **array=rndmArr(2,2);
                cout<<"Here is the matrix: "<<endl;
                for(int i=0;i<2;i++) {
                    cout<<"[ ";
                    for(int j=0;j<2;j++) {
                        cout<<array[i][j]<<" ";
                    }
                    cout<<"]\n";
                }
                cout<<endl;
                int tem=rand()%10+1;
                cout<<"The matrix multiply by "<<tem<<": \n";
                for(int i=0;i<2;i++) {
                    cout<<"Row#"<<(i+1)<<": ";
                    for(int j=0;j<2;j++) {
                        cin>>ans[i][j];
                    }
                }
                bool right=true;
                for(int i=0;i<2;i++) {
                    for(int j=0;j<2;j++) {
                        if((tem*array[i][j])!=ans[i][j]) right=false;
                    }
                }
                for(int i=0;i<2;i++) {
                    delete []ans[i];
                }
                delete []ans;
                if(right) {
                    cout<<"You got it"<<endl;
                    correct++;
                }
                else cout<<"You are wrong"<<endl;
                break;
            }
            case 3: {
                int **ans=rndmArr(2,2);
                //Find the transpose of matrix 
                int **array=rndmArr(2,2);
                Matrix m(2,2,array,"");
                m.display();
                array=m.getArray();
                cout<<"The transpose of matrix"<<": \n";
                for(int i=0;i<2;i++) {
                    cout<<"Row#"<<(i+1)<<": ";
                    for(int j=0;j<2;j++) {
                        cin>>ans[i][j];
                    }
                }
                
                bool right=true;
                for(int i=0;i<2;i++) {
                    for(int j=0;j<2;j++) {
                        if(array[j][i]!=ans[i][j]) right=false;
                    }
                }   
                for(int i=0;i<2;i++) {
                    delete []ans[i];
                }
                delete []ans;
                if(right) {
                    cout<<"You got it"<<endl;
                    correct++;
                }
                else cout<<"You are wrong"<<endl;
                break;
            }
            case 4: {
                int ans;
                //Find a cofactor
                int **array=rndmArr(2,2);
                Matrix m(2,2,array,"");
                m.display();
                cout<<"The cofactor C(0,0): ";
                cin>>ans;
                if(ans==m.cofactor(0,0)) {
                    cout<<"You got it"<<endl;
                    correct++;
                } else cout<<"You are wrong"<<endl;
                break;
            }
            case 5: {
                //matrix * matrix
                bool right=true;
                int **ans=rndmArr(2,2);
                int **array1=rndmArr(2,2);
                int **array2=rndmArr(2,2);
                Matrix a(2,2,array1,"");
                Matrix b(2,2,array2,"");
                cout<<"Here are two matrix: \n";
                cout<<"1) ";
                a.display();
                cout<<"2) ";
                b.display();
                cout<<"Result of first matrix multiply by second matrix :\n";
                int **arr=a.timesByMat(b);
                for(int i=0;i<2;i++) {
                    cout<<"Row#"<<(i+1)<<": ";
                    for(int j=0;j<2;j++) {
                        cin>>ans[i][j];
                    }
                }
                for(int i=0;i<2;i++) {
                    for(int j=0;j<2;j++) {
                        if(arr[i][j]!=ans[i][j]) right=false;
                    }
                } 
                if(right) {
                    cout<<"You got it"<<endl;
                    correct++;
                } else cout<<"You are wrong"<<endl;
                for(int i=0;i<2;i++) {
                    delete []ans[i];
                    delete []arr[i];
                }
                delete []ans;
                delete []arr;
                break;
            }
            default:;
        }
    }
    //Get the name from player
    string name;
    cin.ignore();
    cout<<"You got "<<correct<<"/5"<<endl;
    do {
        cout<<"Your name(without space): ";
        getline(cin,name);
        if(name.find(' ')!=-1) cout<<"Please input without space"<<endl;
    } while(name.find(' ')!=-1);
    //renew the record
    Record r(name,correct);//quick sort in this class
    r.disRec();
}

void calculator() {
    string ans;
    char sel;
    do {    
        menu();
        //select program
        do {
            cout<<"You choose(0-8): ";
            cin>>ans;
            if(ans.at(0)<'0'||ans.at(0)>'7'||ans.length()>1)
                cout<<"Invalid input"<<endl;
        }while(ans.at(0)<'0'||ans.at(0)>'7'||ans.length()>1);
        sel=ans.at(0);
        Matrix a;
        if(sel!='0') {
            //Add a matrix
            int row,col;//row and column
            string name="aaa";//name of the matrix
            //create a linked list to store the matrix
            int **array=getArray(row,col);//2-d array of matrix
            a.setArray(array);
            a.setCol(col);
            a.setRow(row);
            a.setName(name);
        }
        if(sel>='1'&&sel<='3') {
            int r,c;
            string nm="abc";
            cout<<"Please input the other matrix: \n";
            int **arr=getArray(r,c);
            Matrix b(r,c,arr,nm);
            switch(sel) {
                case '1':{
                    //Add a matrix
                    a.addMatrix(b);
                    break;
                }
                case '2': {
                    //Subtract a matrix
                    a.subtract(b);
                    break;
                } 
                case '3': {
                    //Multiply by a matrix
                    a.multiByMat(b);
                    break;
                }
                default:;
            }
        } else if(sel>='4'&&sel<='7') {
            switch(sel) {
                case '4':{
                    //Multiply by a number
                    int number;//a number to multiply a matrix
                    cout<<"An integer to multiply the matrix: ";
                    cin>>number;
                    a.multiByNum(number);
                    break;
                }
                case '5': {
                    //Determinant
                    a.determinant();
                    break;
                } 
                case '6': {
                    //Transpose
                    a.transpose();
                    break;
                }
                case '7': {
                    //Inverse
                    a.inverse();
                    break;
                }
                default:;
            }
        }
        if(sel=='0') {
            cout<<"The end of MATRIX CALCULATOR"<<endl;
        }
        if(sel!='0') {
            cout<<endl;
            cout<<"Press Enter to continue";
            cin.ignore();
            cin.ignore();
        }   
    }while(sel!='0');  
}

void mainMenu() {
    cout<<endl;
    cout<<"***********     Main  Menu     ***********"<<endl;
    cout<<"1. MATRIX CALCULATOR"<<endl;
    cout<<"2. GAME"<<endl;
    cout<<"0. Exit"<<endl;
}

void menu() {
    cout<<endl;
    cout<<"*********   MATRIX CALCULATOR   *********"<<endl;
    cout<<"************     Menu     ************"<<endl;
    cout<<"1. Add a matrix"<<endl;
    cout<<"2. Subtract a matrix"<<endl;
    cout<<"3. Multiply by a matrix"<<endl;
    cout<<"4. Multiply by a number"<<endl;
    cout<<"5. Determinant"<<endl;
    cout<<"6. Transpose"<<endl;
    cout<<"7. Inverse"<<endl;
    cout<<"0. Exit"<<endl;
}

//Get the array from the user
int **getArray(int &row,int &col) {
    cout<<"Row and Column of matrix: ";
    cin>>row>>col;
    //create rows
    int **array;
    array=new int*[row];
    //create columns
    for(int i=0;i<row;i++) {
        array[i]=new int[col];
    }
    
    //Get the elements of matrix
    for(int i=0;i<row;i++) {
        cout<<"Row#"<<(i+1)<<": ";
        for(int j=0;j<col;j++) {
            cin>>array[i][j];
        }
    }
    return array;
}

//randomly fill the array
int **rndmArr(int row,int col) {
    int **array;
    array=new int*[row];
    //create columns
    for(int i=0;i<row;i++) {
        array[i]=new int[col];
        for(int j=0;j<col;j++) {
            array[i][j]=rand()%10;
        }
    }
    return array;
}