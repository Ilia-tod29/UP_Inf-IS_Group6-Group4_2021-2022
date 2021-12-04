#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

void readArr(int arr[], int size){
    cout << "Enter your array: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
void printArr(int arr[], int size){
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Task0
bool isZigZag(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        if (i % 2 == 0 && arr[i] >= arr [i+1]){
            return false;
        }
        else if (i % 2 != 0 && arr[i] <= arr [i+1]){
            return false;
        }
    }
    return true;
}

//Task1
void reverseArr(int arr[], int size){
    int tempArr[100];
    for (int i = 0; i < size; i++){
        tempArr[i] = arr[size - 1 - i];

    }
    for (int i = 0; i < size; i++){
        arr[i] = tempArr[i];
    }
}

//Task2
//One way:
void onlyOdd1(int arr[], int size){
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            for (int j = 0; j < size - i; j++){
                arr[i + j] = arr[i + j + 1];
            }
            i--;
            size--;
        }
    }
    printArr(arr, size);
}
//Another way:
void onlyOdd2(int arr[], int size){
    int tempArr[100], newSize = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 != 0){
            tempArr[newSize++] = arr[i];
        }
    }
    for (int i = 0; i < newSize; ++i) {
        arr[i] = tempArr[i];
    }
    //Optional to set the unnecessary numbers to 0 you could create one more loop from newSize to size(note: newSize <= size)
    printArr(arr, newSize);
}


//Task3
bool isInTheArr(int arr[], int size, int number){
    for (int i = 0; i < size; i++){
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}

void allIndexes(int arr[], int size, int number){
    int counter = 0;
    cout << "Indexes: " << endl;
    for (int i = 0, j = 0; i < size; i++){
        if (arr[i] == number){
            cout << i << " ";
            counter++;
        }
    }
    cout << endl << "This number appears " << counter << " times" << endl;
}

//Matrix
void printMatrix(const int matrix[10][10], int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;
}
void seedSquareMatrix(int matrix[10][10], int rows, int columns){
    srand(time(0));

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            int randomNumber = rand() % 100;
            matrix[i][j] = randomNumber;
        }
    }
}

//Task4
void sumMatrixRows(const int matrix[10][10], int rows, int columns){
    int sum = 0;

    for (int i = 0; i < rows; i++){
        sum = 0;
        for (int j = 0; j < columns; j++){
            sum += matrix[i][j];
        }
        cout << sum << " ";
    }

    cout << endl;
}

//Task5
void diagonalSum(int arr[10][10], int rows, int columns) {
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < rows; ++i) {

        for (int j = 0; j < columns; ++j) {
            if (j == i) {
                mainDiagonalSum += arr[i][j];
            }
            if (j == rows - i - 1) {
                secondaryDiagonalSum += arr[i][j];
            }

        }
    }
    cout << "Main Diagonal: " << mainDiagonalSum << endl;
    cout << "Secondary Diagonal: " << secondaryDiagonalSum << endl;
}

//Task6
void printMatrixPlusTen(int arr[10][10], int rows, int columns){

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << arr[i][j] + 10 << " ";
        }
        cout << endl;
    }
}

//Task7
void minAndMaxElementOfTheMatrix(int arr[10][10], int rows, int columns){
    int min = arr[0][0];
    int max = arr[0][0];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j< columns;  j++){
            if (min > arr[i][j]){
                min = arr[i][j];
            }
            if (max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout << "Min element: " << min << " Max element:" << max << endl;
}

//Task8
void sumMatrixCols(int matrix[10][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            sum += matrix[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int underMainDiagonal(int arr[10][10], int size){
    int sum = 0;
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < i; ++j){
            sum += arr[i][j];
        }
    }
    return sum;
}

int aboveMainDiagonal(int arr[10][10], int size) {
    int sum = 0;
    for (int i = 0; i < size ; i++) {
        for (int j = i + 1; j < size; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int underSecondaryDiagonal(int arr[10][10], int size){
    int sum = 0;
    for (int i = 0; i < size; ++i){
        for (int j = size - 1; j > size - i - 1; --j){
            sum += arr[i][j];
        }
    }
    return sum;
}

int aboveSecondaryDiagonal(int arr[10][10], int size){
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            sum += arr[i][j];
        }
    }
    return sum;
}

//Task9
bool isNumberInMatrix(int matrix[10][10], int rows, int columns, int number){
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if(matrix[i][j] == number) {
                return true;
            }
        }
    }
    return false;
}

void multiplyAndShowPosition(int matrix[10][10], int rows, int columns, int number){
    if(!isNumberInMatrix(matrix, rows, columns, number)) {
        cout << "The matrix do not contains the element." << endl;
        return;
    }
    cout << "Positions: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if(matrix[i][j] == number) {
                matrix[i][j] *= 10;
                cout << i << " " << j << endl;
            }
        }
    }
}


int main()
{
    //Task0
//    int arr[100], size;
//    cout << "Enter your array size: ";
//    cin >> size;
//    if (size > 100)
//    {
//        cout << "Invalid size.";
//    }
//    else {
//        readArr(arr, size);
//        cout << boolalpha << isZigZag(arr, size) << endl;
//    }

    //Task1
//    int arr[100], size;
//    cout << "Enter your array size: ";
//    cin >> size;
//    if (size > 100)
//    {
//        cout << "Invalid size.";
//    }
//    else {
//        readArr(arr, size);
//        cout << "Actual array: " << endl;
//        printArr(arr, size);
//        reverseArr(arr, size);
//        cout << "Reversed array: " << endl;
//        printArr(arr, size);
//    }

    //Task2
//    int arr[100], size;
//    cout << "Enter your array size: ";
//    cin >> size;
//    if (size > 100)
//    {
//        cout << "Invalid size.";
//    }
//    else {
//        readArr(arr, size);
//        int arr2[100];
//        for (int i = 0; i < size; ++i) {
//            arr2[i] = arr[i];
//        }
//        cout << "Actual array: " << endl;
//        printArr(arr, size);
//        cout << "Filtered array onlyOdd1(): " << endl;
//        onlyOdd1(arr, size);
//        cout << "Filtered array onlyOdd2(): " << endl;
//        onlyOdd2(arr2, size);
//    }

    //Task3
//    int arr[100], size;
//    cout << "Enter your array size: ";
//    cin >> size;
//    if (size > 100)
//    {
//        cout << "Invalid size.";
//    }
//    else {
//        readArr(arr, size);
//        int number;
//        cout << "Enter the searcher number: ";
//        cin >> number;
//        if(isInTheArr(arr, size, number)) {
//            allIndexes(arr, size, number);
//        }else {
//            cout << "This number do not appear in the array." << endl;
//        }
//    }

    //Matrix
//    int matrix[10][10];
//
//    seedSquareMatrix(matrix, 4, 4);
//    printMatrix(matrix, 4, 4);
//
//
//    //Task4
//    cout << "Matrix rows sum: ";
//    sumMatrixRows(matrix, 4, 4);
//
//    //Task5
//    diagonalSum(matrix, 4, 4);
//
//    //Task6
//    printMatrixPlusTen(matrix, 4, 4);
//
//    //Task7
//    minAndMaxElementOfTheMatrix(matrix, 4, 4);
//
//    //Task8 -> only square matrix, so we can skip rows and cols in the functions and pass just size(but I'm going to use the already made functions)
//    cout << "Matrix rows sum: ";
//    sumMatrixRows(matrix, 4, 4);
//
//    cout << "Matrix columns sum: ";
//    sumMatrixCols(matrix, 4);
//
//    diagonalSum(matrix, 4, 4);
//
//    cout << "Under the main diagonal sum: " << underMainDiagonal(matrix, 4) << endl;
//    cout << "Above the main diagonal sum: " << aboveMainDiagonal(matrix, 4) << endl;
//    cout << "Under the secondary diagonal sum: " << underSecondaryDiagonal(matrix, 4) << endl;
//    cout << "Above the secondary diagonal sum: " << aboveSecondaryDiagonal(matrix, 4) << endl;
//
//    //Task9
//    multiplyAndShowPosition(matrix, 4, 4, 97);
    return 0;
}