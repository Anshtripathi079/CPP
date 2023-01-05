#include <iostream>
#define SIZE 3
using namespace std;

class Matrix
{
private:
    int mat[SIZE][SIZE];

public:

    void getvalues()
    {
        cout<<"Enter values in the matrix "<<endl;
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                cin>>mat[i][j];
    }

    Matrix operator +(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }

    Matrix operator -(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
        return result;
    }
    
    Matrix operator *(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < SIZE; i++){
            for (int j = 0; j < SIZE; j++){
                result.mat[i][j]=0;
                for (int k = 0; k < SIZE; k++){
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

    // Function to print the matrix
    void printdata()
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1;
    Matrix m2;
    m1.getvalues();
    m2.getvalues();
  
    Matrix m3 = m1 + m2;
    cout << "Matrix m3 after m1 + m2:" << endl;
    m3.printdata();

    Matrix m4 = m1 - m2;
    cout << "Matrix m3 after m1 - m2:" << endl;
    m4.printdata();
    Matrix m5 = m1*m2;
    m5.printdata();

}