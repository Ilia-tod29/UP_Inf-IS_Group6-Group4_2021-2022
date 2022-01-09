#include <iostream>

using namespace std;

//TASK0
void printArr(int arr[], int size, int index) {
    if (index == size) {
        return;
    }
    cout << arr[index] << " ";
    printArr(arr, size, index + 1);
}

//TASK1
void readArr(int arr[], int size, int index) {
    if (index == size){
        return;
    }

    cin >> arr[index];
    readArr(arr, size, index + 1);
}

//TASK2
int factorial(int num) {
    if(num < 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

//TASK3
int minEl(int* arr, int size, int min) {
    if (size == 0) {
        return min;
    }
    if (*arr < min) {
        min = *arr;
    }
    return minEl(++arr, --size, min);
}

//TASK4
int decimalToBinary(int number, int d = 1) {
    if (number == 0) {
        return 0;
    }
    return  (number % 2) * d + decimalToBinary(number / 2, d*10);
}

//TASK5
bool isPowerOfTwo(int number) {
    if (number == 0 || number == 2) {
        return true;
    }

    if (number % 2 != 0) {
        return false;
    }
    isPowerOfTwo(number / 2);
}

//TASK6
bool isAscending(int arr[], int size) {
    if (size <= 1) {
        return true;
    }
    if (*arr > *(arr + 1)) {
        return false;
    }
    return isAscending(arr + 1, --size);
}

//TASK7
int fib(int num) {
    if(num <= 0) {
        return 0;
    }
    if (num == 1 || num == 2) {
        return 1;
    }
    return fib(num - 1) + fib(num - 2);
}

int main() {
    //TASK0
//    int arr[5] = {1, 2, 3, 4, 5};
//    printArr(arr, 5, 0);

    //TASK1
//    int arr[5];
//    readArr(arr, 5, 0);
//    printArr(arr, 5, 0);

    //TASK2
//    cout << factorial(5) << endl;

    //TASK3
//    int arr[5] = { 7,2,5,-17,-30 };
//    cout << minEl(arr, 5, arr[0]);

    //TASK4
//    cout << decimalToBinary(10) << endl;

    //TASK5
//    cout << boolalpha << isPowerOfTwo(0) << endl;
//    cout << boolalpha << isPowerOfTwo(24) << endl;
//    cout << boolalpha << isPowerOfTwo(44) << endl;
//    cout << boolalpha << isPowerOfTwo(32) << endl;
//    cout << boolalpha << isPowerOfTwo(332) << endl;
//    cout << boolalpha << isPowerOfTwo(65536) << endl;

    //TASK6
//    int arr[5] = { 3,4,5,6,7 };
//    cout << boolalpha << isAscending(arr, 5);

    //TASK7
//    cout << fib(0) << endl;
//    cout << fib(8) << endl;
    return 0;
}
