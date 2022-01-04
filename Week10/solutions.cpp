#include <iostream>
#include <cmath>

using namespace std;

//TASK0
int* arrayDivide(int* arr, int size) {
    int temp = size / 2;
    int* arr1 = new int[temp];
    for (int i = 0; i < temp; ++i)
    {
        arr1[i] = arr[i];
    }
    return arr1;
}

//TASK1
int* arrayCopy(int* arr, int size) {
    int* arr1 = new int[size];
    for (int i = 0; i < size; ++i)
    {
        arr1[i] = arr[i];
    }
    return arr1;
}

//TASK2
void printRows(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void requiredGrades() {
    int size;
    cin >> size;
    int** matrix = new int*[size];
    for(int i = 0; i < size; i++) {
        int n;
        cin >> n;
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
        printRows(matrix[i], n);
    }
    for(int i = 0; i < size; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;
}

//TASK3
void resize(int*& arr, int size, int newSize) {
    int *temp = new int [size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = new int[newSize];
    if (newSize > size) {
        newSize = size;
    }
    for (int i = 0; i < newSize; i++) {
        arr[i] = temp[i];
    }
    delete[] temp;
}

//TASK4
char* intToStr(int number)
{
    int size = 0, temp = number;
    while (temp != 0)
    {
        size++;
        temp /= 10;
    }
    temp = number;
    char* str = new char[size];
    for (int i = 0; i < size; i++)
    {
        temp = (number / (pow(10, size - 1 - i)));
        str[i] = temp % 10 + '0';
    }
    return str;
}

//TASK5
int findSize(char* arr)
{
    int ctr = 0;
    while (arr[ctr] != '\0')
    {
        ctr++;
    }
    return ctr;
}

//TASK6
void copyStr(char* str1, char* str2) {
    delete[] str1;
    int str2Count = 0;
    while(str2[str2Count] != '\0') {
        ++str2Count;
    }
    ++str2Count; //-> for \0
    str1 = new char[str2Count];
    for (int i = 0; i < str2Count; ++i) {
        str1[i] = str2[i];
    }
    str1[str2Count] = '\0';
}

//TASK7
char* copyStr(char* arr, int size)
{
    char* arr1 = new char[size];
    for (int i = 0; i < size; ++i)
    {
        arr1[i] = arr[i];
    }
    return arr1;
}

//TASK8
int getSize(char* str) {
    int size = 0;
    while(*str != '\0') {
        size++;
        str++;
    }
    return size;
}

char* concat(char* str_1, char* str_2) {

    int new_size_1 = getSize(str_1);
    int new_size_2 = getSize(str_2);

    char* newStr = new char[new_size_1+new_size_2+1];
    for (int i = 0;i < new_size_1;i++) {
        newStr[i] = str_1[i];
    }
    for (int i = new_size_1 ; i < new_size_1 + new_size_2 + 1; i++) {
        newStr[i] = str_2[i - new_size_1];
    }
    return newStr;
}

//TASK9
int compareStrings(char* str1, char* str2)
{
    int size = findSize(str1) + 1;
    int size2 = findSize(str2) + 1;
    int temp = size;
    if (temp > size2)
    {
        temp = size2;
    }
    for (int i = 0; i < size; i++)
    {
        if (str1[i] > str2[i])
        {
            return 1;
        }
        else if (str1[i] < str2[i])
        {
            return -1;
        }
    }
    if (size > size2)
    {
        return -1;
    }
    else if (size < size2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    //TASK0
//    int arr[5] = { 1,2,3,4,5 };
//    int* arr1 = arrayDivide(arr, 5);
//    for (int i = 0; i < 5 / 2 ; ++i)
//    {
//        cout << arr1[i] << endl;
//    }

    //TASK1
//    int arr[5] = { 1,2,3,4,5 };
//    int* arr1 = arrayCopy(arr, 5);
//    for (int i = 0; i < 5 ; ++i)
//    {
//        cout << arr1[i] << endl;
//    }

    //TASK2
//    requiredGrades();

    //TASK3
//    int* arr = new int[5];
//    for (int i = 0; i < 5; i++) {
//        arr[i] = i;
//    }
//    resize(arr, 5, 3);
//    for (int i = 0; i < 3; ++i)
//    {
//        cout << arr[i] << endl;
//    }
//    delete[] arr;

    //TASK4
//    char* str = intToStr(12512351);
//    for (int i = 0; i < 8; i++)
//    {
//        cout << str[i];
//    }
//    cout << endl;

    //TASK5
//    char str[10] = { '1','2','3','4','5','6','7','8','9','\0' };
//    cout << findSize(str) << endl;

    //TASK6
//    char *str1 = new char[5]{'I', 'l', 'i', 'a'}, *str2 = new char[5]{'A', 'l', 'e', 'x'};
//    copyStr(str1, str2);
//    cout << str1 << endl;
//    cout << str2 << endl;
//    delete[] str1;
//    delete[] str2;

    //TASK7
//    char str[10] = { 'a','b','c','d','e','f','g','h','i','\0' };
//    char* strCopy = copyStr(str, 10);
//    for (int i = 0; i < 10; i++)
//    {
//        cout << strCopy[i];
//    }


    //TASK8
//    char *str1 = new char[5]{'I', 'l', 'i', 'a'}, *str2 = new char[5]{'A', 'l', 'e', 'x'};
//    char *result = concat(str1, str2);
//    cout << result << endl;
//    delete[] str1;
//    delete[] str2;
//    delete[] result;

    //TASK9
//    char str1[10] = { "abcdefghi" };
//    char str2[10] = { "abcdefghi" };
//    char str3[10] = { "bbcdefghi" };
//    char str4[2] = { "b" };
//    char str5[2] = { "A" };
//    cout << compareStrings(str1, str2) << endl;
//    cout << compareStrings(str1, str3) << endl;
//    cout << compareStrings(str1, str4) << endl;
//    cout << compareStrings(str4, str5) << endl;
//
//    cout << compareStrings(str2, str1) << endl;
//    cout << compareStrings(str3, str1) << endl;
//    cout << compareStrings(str4, str1) << endl;
//    cout << compareStrings(str5, str4) << endl;

    return 0;
}