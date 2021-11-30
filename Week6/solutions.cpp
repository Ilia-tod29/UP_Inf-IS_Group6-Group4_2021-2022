#include <iostream>

using namespace std;

void printArray(double arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << arr[i]<< " ";
    }
    cout << endl;
}
void printArray(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << arr[i]<< " ";
    }
    cout << endl;
}

void enterArray(double arr[], int length){
    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }
}
void enterArray(int arr[], int length){
    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }
}

//Task0

int MIN_N(double arr[], int n)
{
    int counter = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[counter] > arr[i]) {
            counter = i;
        }

    }
    return counter;
}
int MAX_N(double arr[], int n)
{
    int counter = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[counter] < arr[i]) {
            counter = i;
        }

    }
    return counter;
}

//Task1

void printSwap(double arr[],int min, int max,int length) {
    double temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;

    printArray(arr, length);
}

//task 3

int firstPositiveElement(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            return i;
        }
    }
    return -1;
}

void sumFromFirstPositive(int arr[], int size) {
    int index = firstPositiveElement(arr, size);
    int sum = 0;

    if (index < 0)
    {
        cout << "Error!" << endl;
        return;
    }
    cout << "First positive element is: " << arr[index] << endl;
    for (; index < size ; index++)
    {
        sum += arr[index];
    }
    cout << "Sum from first positive element is: " << sum << endl;
}

//Task4

void printBackwards(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] <<", " ;
    }
    cout << endl;
}

//Task5

void findSymbols(char arr[], int size, char symbol) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == symbol) {
            counter += 1;
            arr[i] = '*';
        }
    }
    cout << arr << " " << counter;
}

//task 6

void symmetry(char arr[], int size) {
    bool flag = true;

    for (int i = 0; i < size / 2; i++)
    {

        if (arr[i] != arr[size - 1 - i])
        {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Symmetrical" << endl;
    }
    else {
        cout << "Not symmetrical" << endl;
    }

}

int main(){
    //Task0
//    double arr[100];
//
//    int length;
//    cin >> length;
//    enterArray(arr, length);
//    cout << "Min index:" << MIN_N(arr, length) << endl;
//    cout << "Max index: " << MAX_N(arr, length) << endl;

    //Task1
//    int length;
//    cin >> length;
//    double arr[100];
//    enterArray(arr, length);
//    int min = MIN_N(arr,length);
//    int max = MAX_N(arr, length);
//    printArray(arr, length);
//    printSwap(arr, min, max, length);

    //Task3
//    int arr[100], length;
//    cin >> length;
//
//    enterArray(arr, length);
//
//    sumFromFirstPositive(arr, length);

    //Task4
//    int arr[100], length;
//    cin >> length;
//    enterArray(arr, length);
//    printBackwards(arr, length);

    //Task5
//    char arr[100];
//    int size;
//    cin >> size;
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//    arr[size] = '\0';
//    char symbol;
//    cin >> symbol;
//    findSymbols(arr, size, symbol);



    //Task6
//    char arr[100];
//    int size;
//    cin >> size;
//    for (int i = 0; i < size; i++)
//    {
//        cin >> arr[i];
//    }
//    arr[size] = '\0';
//    symmetry(arr, size);

    return 0;
}
