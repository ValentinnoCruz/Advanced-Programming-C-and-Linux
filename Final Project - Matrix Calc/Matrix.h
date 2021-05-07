

#ifndef MATRIX_H
#define	MATRIX_H

#include <iostream>
#include <string>
using namespace std;


class Matrix {
    private:
        int row;
        int col;
        int **array;//2-d array to store the matrix
        string name;//name of matrix
        int determinant(int**,int);
        int **adj();//adjoint
        
    public:
        //Default constructor
        Matrix() {row=col=0;array=0;name="";}
        //Copy constructor
        Matrix(const Matrix &);
        //Constructor
        Matrix(int,int,int **,string);
        //Destructor
        ~Matrix();
        void addMatrix(Matrix);         //add a Matrix
        void subtract(Matrix);          //subtract a Matrix
        void multiByNum(int);           //multiply a Number
        void multiByMat(Matrix);        //multiply by a matrix
        void transpose();               //Transpose
        void determinant();             //Determinant(output directly)
        void inverse();                 //Inverse
        void reduce_echelon();          //unfinished
        int getDet();                   //Determinant(return the result)
        int getRow() const {return row;}
        int getCol() const {return col;}
        string getName() const {return name;}
        void setRow(int r) {row=r;}
        void setCol(int c) {col=c;}
        void setArray(int **a) {array=a;}
        void setName(string n) {name=n;}
        void display() const;           //Display the matrix
        int cofactor(int,int);          //Cofactor of C(x,y)
        int **getArray() const {return array;}
        int **timesByMat(Matrix);       //multiply by a matrix and return the pointer
        //Overload operator +, -, * （unfinished)
        void operator=(const Matrix &right);//finished 
        Matrix operator + (const Matrix &);
        Matrix operator - (const Matrix &);
        Matrix operator * (const Matrix &);
        Matrix operator * (int);
};

#endif	/* MATRIX_H */

