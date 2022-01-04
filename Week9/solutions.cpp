#include <iostream>

void fillArr(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> *(arr + i);
    }
}

//TASK0
int* findInArray(int* arr, int n, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return &arr[i];
        }
    }
    return nullptr;
}

//TASK1
int* makeCourses(int* arr, int max, int size, int* arr1) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arr1[counter] + arr[i] <= max) {
            arr1[counter] += arr[i];
        }
        else {
            counter++;
            arr1[counter] = arr[i];
        }
    }
    return arr1;
}

//TASK1
bool isInTheFirstArray(int* arr1, int* arr2, int size1 , int size2)
{
    bool flag = false;
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            return false;
        }
        else {
            flag = false;
        }
    }
    return true;
}

//TASK3
bool duplicates(long *pointers[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if(**(pointers + i) == **(pointers + j)) {
                return true;
            }
        }
    }
    return false;
}

//TASK4
void findMinArray(int* arr1, int* arr2, int*& ptr, int size1, int size2)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < size1; i++) {
        sum1 += arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        sum2 += arr2[i];
    }
    if (sum1 <= sum2) {
        ptr = arr1;
    }
    else {
        ptr = arr2;
    }
}

//TASK6
char getFirstUniqueChar(char* str) {
    int index = 0, index1;
    bool isUnique = false;
    while(str[index] != '\0') {
        index1 = index + 1;
        while (str[index1] != '\0') {
            if(str[index1] == str[index]) {
                isUnique = true;
                break;
            }
            index1++;
        }
        if(!isUnique) {
            return str[index];
        }
        index++;
    }
    return '0';
}

void fillMatrix(int(*arr)[100], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (j < n - i - 1)
            {
                *(*(arr + i) + j) = 0;
            }
            else if (j == n - i - 1)
            {
                *(*(arr + i) + j) = 1;
            }
            else
            {
                *(*(arr + i) + j) = 2;
            }
        }
    }
}


int main() {
    //TASK0
//    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int* found = findInArray(arr, 44, 9);
//    std::cout << (found ? *found : 0)  << std::endl;

    //TASK1
//    int arr[15] = { 31,12,17,33,45,34,17,19,31,42,5,9,23,16,10 };
//    int max = 160;
//    int arr1[20] = {0};
//    int* Courses = makeCourses(arr, max, 15, arr1);
//    while (*Courses != 0) {
//        std::cout << *Courses << " ";
//        Courses++;
//    }

    //TASK2
//    int arr1[5] = { 11,72,13,14,15 };
//    int arr2[6];
//    fillArr(arr2, 6);
//    std::cout << std::boolalpha << isInTheFirstArray(arr1, arr2, 5, 6);

    //TASK3
//    long a, b, c, d;
//    a = 50; b = 21; c = 15; d = 21;
//
//    long* pointers[] { &a, &b, &c, &d };
//    std::cout << std::boolalpha << duplicates(pointers, 4) << std::endl;

    //TASK4
//    int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr2[4] = { 4,4,4,4 };
//    int arr3[3] = { 2,4,50 };
//    int* ptr = nullptr;
//
//    findMinArray(arr1, arr2, ptr, 10, 4);
//    for (int i = 0; i < 4; i++)
//    {
//        std::cout << *(ptr + i) << " ";
//    }
//    std::cout << std::endl;
//
//    findMinArray(arr1, arr3, ptr, 10, 3);
//    for (int i = 0; i < 10; i++)
//    {
//        std::cout << *(ptr + i) << " ";
//    }

    //TASK5
//    std::cout << "Enter N: ";
//    size_t n;
//    std::cin >> n;
//    while (n < 1 || n>100)
//    {
//       std::cout << "Enter a valid value of N (between 1 and 100): ";
//       std::cin >> n;
//    }
//    int arr[100][100];
//    arr[0][0] = 0;
//    fillMatrix(arr, n);
//    for (size_t i = 0; i < n; i++)
//    {
//       for (size_t j = 0; j < n; j++)
//       {
//           std::cout << arr[i][j] << " ";
//       }
//       std::cout << std::endl;
//    }

    //TASK6
//    char str[7] = "Pepsii";
//    char str1[7] = "pepsii";
//    std::cout << getFirstUniqueChar(str) << std::endl;
//    std::cout << getFirstUniqueChar(str1) << std::endl;
    return 0;
}
