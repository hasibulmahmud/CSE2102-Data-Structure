#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter First matrix row and coloum size:";
    int row1,coloum1;
    cin>> row1 >> coloum1;
    cout << "Enter second matrix row and coloum size:";
    int row2,coloum2;
    cin>> row2 >> coloum2;
    int matrix1[row1][coloum1];
    cout << "Enter First matrix Element:";
    for(int i=0;i<row1;i++){
            for(int j=0;j<coloum1;j++){
                cin >>matrix1[i][j];
            }
    }
    int matrix2[row2][coloum2];
    cout << "Enter Second matrix Element:";
     for(int i=0;i<row2;i++){
            for(int j=0;j<coloum2 ;j++){
                cin >> matrix2[i][j];
            }
    }
    int matrix[row1][coloum2];
     for(int i=0;i<row1;i++){
            for(int j=0;j<coloum2 ;j++){
               matrix[i][j]=0;
            }
    }

    if(row2==coloum1){
        for(int i=0 ;i<row1;i++){
            for(int j=0;j<coloum2;j++){
                 for(int k=0;k<row2;k++){
                     matrix[i][j] =matrix[i][j] + matrix1[i][k]*matrix2[k][j];
                 }
            }
        }

    cout << "New matrix" <<endl;
     for(int i=0;i<row1;i++){
            for(int j=0;j<coloum2 ;j++){
               cout << matrix[i][j] <<"\t";
            }
            cout << endl;
    }
    }
    else{
        cout << "Matrix Multiplication is Not possible." << endl;
    }


}
