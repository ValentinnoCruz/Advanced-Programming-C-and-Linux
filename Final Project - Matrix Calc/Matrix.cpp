
#include "Matrix.h"
#include <cmath> //power of -1

//Constructor
Matrix::Matrix(int r, int c, int **a, string nm) {
    row=r;
    col=c;
    name=nm;
    array=a;
}

//Copy constructor
Matrix::Matrix(const Matrix &o) {
    //Copy constructor works well
    //create rows
    this->row=o.getRow();
    this->col=o.getCol();
    this->name=o.getName();
    array=new int*[row];
    //create columns and copy matrix
    for(int i=0;i<row;i++) {
        array[i]=new int[col];
        for(int j=0;j<col;j++) {
            array[i][j]=o.array[i][j];
        }
    } 
}

//Destructor
Matrix::~Matrix() {
    //deallocate memory
    for(int i=0;i<row;i++) {
        delete []array[i];
    }
    delete []array;
//    cout<<"Matrix destructor"<<endl;
}

//Display the matrix
void Matrix::display() const{
    //output the matrix
//    cout<<endl;
    for(int i=0;i<row;i++) {
        cout<<"[ ";
        for(int j=0;j<col;j++) {
            cout<<array[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
//    cout<<endl;
}

//multiply a Number
void Matrix::multiByNum(int n) {
    cout<<"The result of multiplying by "<<n<<":"<<endl;
    for(int i=0;i<row;i++) {
        cout<<"[ ";
        for(int j=0;j<col;j++) {
            cout<<n*array[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
}

//Matrix add a matrix
void Matrix::addMatrix(Matrix a) {
    
    if(row!=a.getRow()||col!=a.getCol()) {
        cout<<"Invalid operation"<<endl;
        cout<<"Size of the first matrix should be \n";
        cout<<"Equal to size of the second matrix"<<endl;
        return;
    }
    else {
        display();
        cout<<"  + "<<endl;
        a.display();
        cout<<"The result of two matrix addition:"<<endl;
        for(int i=0;i<row;i++) {
            cout<<"[ ";
            for(int j=0;j<col;j++) {
                cout<<array[i][j]+a.array[i][j]<<" ";
            }
            cout<<"]"<<endl;
        }
        cout<<endl;
    }
}

//Matrix minus a matrix
void Matrix::subtract(Matrix a) {
    if(row!=a.getRow()||col!=a.getCol()) {
        cout<<"Invalid operation"<<endl;
        cout<<"Size of the first matrix should be \n";
        cout<<"Equal to size of the second matrix"<<endl;
        return;
    }
    else {
        display();
        cout<<"  - "<<endl;
        a.display();
        cout<<"The result of two matrix subtraction:"<<endl;
        for(int i=0;i<row;i++) {
            cout<<"[ ";
            for(int j=0;j<col;j++) {
                cout<<array[i][j]-a.array[i][j]<<" ";
            }
            cout<<"]"<<endl;
        }
        cout<<endl;
    }
}

//Transpose
void Matrix::transpose() {
    cout<<"The transpose is "<<endl;
     for(int i=0;i<col;i++) {
         cout<<"[ ";
        for(int j=0;j<row;j++) {
            cout<<array[j][i]<<" ";
        }
        cout<<"]"<<endl;
    }
}

//multiply by a matrix
void Matrix::multiByMat(Matrix o) {
    if(this->col!=o.getRow()) {
        cout<<"Invalid operation"<<endl;
        cout<<"Number of columns in the first matrix should be \n";
        cout<<"Equal to the number of rows in the second matrix"<<endl;
        return;
    } else {
        display();
        cout<<"  * "<<endl;
        o.display();
        int **a;//2-d array of matrix
        //create rows
        a=new int*[this->row];
        //create columns
        for(int i=0;i<this->row;i++) {
            a[i]=new int[o.col];
        }
        for(int i=0;i<this->row;i++) {
            for(int j=0;j<o.col;j++) {
                a[i][j]=0;
                for(int k=0;k<this->col;k++) {
                    a[i][j]+=array[i][k]*o.array[k][j];//keep doing
                }
            }
        }
        cout<<"The result of two matrix multiplication:"<<endl;
        Matrix r(row,col,a,"");
        r.display();
    }
}

//Use adj(A) to get inverse
void Matrix::inverse() {
    if(col!=row||col<1||row<1) {
        cout << "ERROR:Cannot Get Inverse of this Matrix.\n";
        return;
    } else if(col==1&&col==1) {
        display();
        cout<<"Inverse: ";
        cout<<"1/"<<array[0][0]<<endl;
    } else if(col==2&&col==2) {
        
        int d=array[0][0]*array[1][1]-array[0][1]*array[1][0];
        if(d==0) cout << "ERROR:Cannot Get Inverse of this Matrix.\n";
        else {
            display();
            int **temp;//2-d array of matrix
            temp=new int*[row];
            //create columns
            for(int i=0;i<row;i++) {
                temp[i]=new int[col];
            }
            temp[0][0]=array[1][1];    
            temp[0][1]=-array[0][1];
            temp[1][0]=-array[1][0];
            temp[1][1]=array[0][0];
            cout<<"Inverse: "<<endl;
            cout<<(d<0?"-":"");
            cout<<"1/"<<abs(d)<<"*"<<endl;
            for(int i=0;i<row;i++) {
                cout<<"[ ";
                for(int j=0;j<col;j++) {
                    cout<<temp[i][j]<<" ";
                }
                cout<<"] "<<endl;
            }
            //delete temp memory ********************************
        }
    } else {
        int det=determinant(array,row);
        if(det==0) {
            cout << "ERROR:Cannot Get Inverse of this Matrix.\n";
        } else {
            display();
            cout<<"Inverse: "<<endl;
            int **a=adj();
            cout<<(det<0?"-":"");
            cout<<"1/"<<abs(det)<<"*"<<endl;
            for(int i=0;i<row;i++) {
                cout<<"[ ";
                for(int j=0;j<col;j++) {
                    cout<<a[i][j]<<" ";
                }
                cout<<"] "<<endl;
            }
            for(int i=0;i<row;i++) {
                delete []a[i];
            }
            delete []a;
        }
    }
}

//Determinant(output directly)
void Matrix::determinant() {
    int d=0;
    if(col!=row||col<1||row<1) {
        cout << "ERROR:Cannot Get determinant.\n";
        return;
    } else if(col==1&&col==1) {
        d=array[0][0];
    } else if(col==2&&col==2) {
        d=array[0][0]*array[1][1]-array[0][1]*array[1][0];
    } else {
        for(int i=0;i<row;i++) {
            d+=array[0][i]*cofactor(0,i);
        }
    }
    display();
    cout<<"Determinant: "<<d<<endl;
}

//Determinant(return the result)
int Matrix::getDet() {
    int d=0;
    if(col!=row||col<1||row<1) {
        cout << "ERROR:Cannot Get determinant.\n";
        return 0;
    } else if(col==1&&col==1) {
        d=array[0][0];
    } else if(col==2&&col==2) {
        d=array[0][0]*array[1][1]-array[0][1]*array[1][0];
    } else {       
        for(int i=0;i<row;i++) {
            d+=array[0][i]*cofactor(0,i);
        }
    }
    return d;
}


int Matrix::determinant(int **a,int n) {
    if(n==1) {
        return a[0][0];
    } else if(n==2) {
        return a[0][0]*a[1][1]-a[0][1]*a[1][0];
    } else {
        int **temp;//2-d array of matrix
        //create rows
        int tRow=n-1;
        int tCol=n-1;
        temp=new int*[tRow];
        //create columns
        for(int i=0;i<tRow;i++) {
            temp[i]=new int[tCol];
            for(int j=0;j<tCol;j++) {
                temp[i][j]=0;
            }
        }
        int det=0;
        int c=0,
            r=0;
        for(int i=0;i<n;i++) {
            c=r=0;
            for(int j=1;j<n;j++) {
                for(int k=0;k<n;k++) {
                    if(k==i) continue;
                    temp[c][r]=a[j][k];
                    r++;
                    if(r==(n-1)) {
                        c++;
                        r=0;
                    }
                }
            }
            det+=pow(-1,i)*a[0][i]*determinant(temp,tRow);   
        }
        for(int i=0;i<tRow;i++) {
                delete []temp[i];
            }
            delete []temp;
        return det;
    }
}


//multiply by a matrix and return the pointer
int **Matrix::timesByMat(Matrix o) {
    int **a;//2-d array of matrix
    //create rows
    a=new int*[this->row];
    //create columns
    for(int i=0;i<this->row;i++) {
        a[i]=new int[o.col];
    }
    for(int i=0;i<this->row;i++) {
        for(int j=0;j<o.col;j++) {
            a[i][j]=0;
            for(int k=0;k<this->col;k++) {
                a[i][j]+=array[i][k]*o.array[k][j];//keep doing
            }
        }
    }
    return a;
}

//Get the adjoint
int **Matrix::adj() {
    int **a;
    a=new int*[row];
    //create columns
    for(int i=0;i<row;i++) {
        a[i]=new int[col];
    }
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            a[i][j]=cofactor(j,i);
        }
    }
    
    return a;
}

//Cofactor of C(x,y)
int Matrix::cofactor(int a, int b) {
    int res=0;
    int **temp;//2-d array of matrix
    //create rows
    int tRow=row-1;
    int tCol=col-1;
    temp=new int*[tRow];
    //create columns
    for(int i=0;i<tRow;i++) {
        temp[i]=new int[tCol];
        for(int j=0;j<tCol;j++) {
            temp[i][j]=0;
        }
    }
    int c=0,
        r=0;
    for(int i=0;i<row;i++) {
        if(i!=a) {
            for(int j=0;j<col;j++) {
                if(j!=b) {
                    temp[r][c++]=array[i][j];
                }
            }
            c=0;
            r++;
        }
    }
//    cout<<r<<" "<<c<<endl;
    res=pow(-1,a+b)*determinant(temp,tRow);
    for(int i=0;i<tRow;i++) {
                delete []temp[i];
            }
            delete []temp;
    return res;
}

void Matrix::reduce_echelon() {
    
}

//Overload operator = 
void Matrix::operator =(const Matrix& right) {
    for(int i=0;i<row;i++) {
        delete []array[i];
    }
    delete []array;
    name=right.getName();
    row=right.getRow();
    col=right.getCol();
    array=new int*[row];
    //create columns
    for(int i=0;i<row;i++) {
        array[i]=new int[col];
        for(int j=0;j<col;j++) {
            array[i][j]=right.getArray()[i][j];
        }
    }
}