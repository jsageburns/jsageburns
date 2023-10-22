//Jordan Burns, Lab 6 EECS 348. Matrix operations.

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


const int max_size = 100;

void readfile(int &size, int matrix1[max_size][max_size], int matrix2[max_size][max_size]);
void printfile(int &size, int matrix[max_size][max_size]);
void addition(int matrix1[max_size][max_size], int matrix2[max_size][max_size], int result[max_size][max_size], int &size);
void multiplication(int matrix1[max_size][max_size], int matrix2[max_size][max_size], int result[max_size][max_size], int &size);
void subtraction(int matrix1[max_size][max_size], int matrix2[max_size][max_size], int result[max_size][max_size], int &size);


int main() {
    std::cout << "Jordan Burns\nLab #6: Matrix Manipulation\n";
    int matrix1[max_size][max_size];
    int matrix2[max_size][max_size];
    int result[max_size][max_size];
    int size; 

    readfile(size, matrix1, matrix2);

    std::cout << "Matrix A:\n";
    printfile(size, matrix1);

    std::cout << "Matrix B:\n";
    printfile(size, matrix2);

    std::cout << "Matrix Sum (A + B):\n";
    addition(matrix1, matrix2, result, size);

    std::cout << "Matrix Product (A * B):\n";
    multiplication(matrix1, matrix2, result, size);

    std::cout << "Matrix Difference (A - B):\n";
    subtraction(matrix1, matrix2, result, size);

    return 0;
}





///*1. Read values from a file into a matrix:
//Create a function to read matrix data from a specified file and store it in a 2D array.
void readfile(int &size, int matrix1[max_size][max_size], int matrix2[max_size][max_size]) {

    char matrixInput; 
    std::ifstream MyFile("matrix_input.txt");
    if (!MyFile) {
        
    }
    MyFile >> size; 
    std::cout << matrixInput;
    
    for (int x=0; x < size; x++) {
        for (int y=0; y<size; y++) {
            MyFile >> matrix1[x][y];
        }
    }

    for (int x=0; x < size; x++) {
        for (int y=0; y<size; y++) {
            MyFile >> matrix2[x][y];
        }
    }
    MyFile.close();
    
}





//2. Print a matrix:
//Implement a function to display a matrix in a user-friendly format. The matrix values should nicely align in a column.
void printfile(int &size, int matrix[max_size][max_size]) {
    
    for (int x=0; x < size; x++) {
        for (int y=0; y<size; y++) {
            std::cout << setw(5) << matrix[x][y] <<  " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n";

}





//3. Add two matrices and place the result in a third matrix; print the result:
//Create a function that adds two matrices of the same size and stores the result in a third matrix. Display the resulting matrix.
void addition(int matrix1[max_size][max_size], int matrix2[max_size][max_size], int result[max_size][max_size], int &size) {
    //take each xy pair from m1 and m2 and add them. set that to result[xy].
    for (int x=0; x<size; x++) {
        for (int y=0; y<size; y++) {
            int m1_val = matrix1[x][y];
            int m2_val = matrix2[x][y];
            result[x][y] = (m2_val + m1_val);
        }

    }

    //print matrix result
    for (int x=0; x < size; x++) {
        for (int y=0; y<size; y++) {
            std::cout << setw(5) << result[x][y] <<  " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n";
}





//4. Multiply two matrices and place the result in a third matrix; print the result:
//Implement a function for matrix multiplication (matrix1 * matrix2 = result_matrix). Display the resulting matrix.
void multiplication(int matrix1[max_size][max_size], int matrix2[max_size][max_size], int result[max_size][max_size], int &size) {
    //take each xy pair from m1 and m2 and mult them. set that to result[xy].


    for (int x=0; x<size; x++)
    {
        for (int y=0; y<size; y++)
        {
            result[x][y] = 0;
            for (int i = 0; i < size; i++)
            {
                result[x][y] += (matrix1[x][i] * matrix2[i][y]);
            }
        }
    }

    //print matrix result
    for (int x=0; x < size; x++) {
        for (int y=0; y<size; y++) {
            std::cout << setw(5) << result[x][y] <<  " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n";
}





//5. Subtract the second matrix from the first matrix and place the result in a third matrix; print the result:
//Develop a function to subtract one matrix from another and store the result in a third matrix. Display the resulting matrix.
void subtraction(int matrix1[max_size][max_size], int matrix2[max_size][max_size], int result[max_size][max_size], int &size) {
    //take each xy pair from m1 and m2 and subtract them. set that to result[xy].
    for (int x=0; x<size; x++) {
        for (int y=0; y<size; y++) {
            int m1_val = matrix1[x][y];
            int m2_val = matrix2[x][y];
            result[x][y] = (m1_val - m2_val);
        }

    }

    //print matrix result
    for (int x=0; x < size; x++) {
        for (int y=0; y<size; y++) {
            std::cout << setw(5) <<result[x][y] <<  " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n";
}
