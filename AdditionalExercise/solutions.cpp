#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//TASK0
bool isSet(const size_t arr[], size_t length) {
    for (int i = 0; i < length; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (arr[i] == arr[j]) {
                return false;
            }
        }
    }
    return true;
}

bool doesConsist (const size_t arr[], size_t length, size_t elementToCheck) {
    if(length == 0) {
        return false;
    }
    if(arr[0] == elementToCheck) {
        return true;
    }
    return doesConsist(++arr, --length, elementToCheck);
}

bool isSubset(const size_t arr[], const size_t arr1[], size_t length, size_t length1) {
    if(length == 0) {
        return true;
    }
    if(!doesConsist(arr1, length1, arr[0])) {
        return false;
    }
    return isSubset(++arr, arr1, --length, length1);
}


//TASK1
int* createArr(int size) {\
    int* arr;
    arr = new int[size];
    cout << "Enter your array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    return arr;
}

bool isZigZag(const int arr[], int size){
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

//TASK2
bool isSymmetrical (const int arr[][10], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] != arr[j][i]) {
                return false;
            }
        }
    }
    return true;
}

//TASK3
//bool isPowerOfTwo (int n) {
//    if(n == 1) {
//        return true;
//    }
//    while (n != 0) {
//        if (n % 2 != 0) {
//            return false;
//        }
//        n /= 2;
//    }
//    return true;
//}
bool isPowerOfTwo(int n)
{
    if (n <= 0) return false;
    if (n == 2 || n == 1) return true;
    if (n % 2 != 0) return false;

    return isPowerOfTwo(n / 2);
}

int sum (const int matrix[10][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                sum += matrix[i][j];
            }
            if ((i + j) == (n - 1) && i != j) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

//TASK4
//void removeSpaces(char* s)
//{
//    char* cpy = s;
//    char* temp = s;
//    while (*cpy)
//    {
//        if (*cpy != ' ') {
//            *temp = *cpy;
//            temp++;
//        }
//        cpy++;
//    }
//    *temp = 0;
//}
int lettersCount (const char* str) {
    int counter = 0;
    while (*str != '\0') {
        if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            counter++;
        }
        str++;
    }
    return counter;
}
bool isAnagram (char* str1, char* str2) {
    if (lettersCount(str1) == lettersCount(str2)) {
        int help = 0;
        while (str1[help] != '\0' && str2[help] != '\0') {
            char currentLetter = str1[help];
            int counter1 = 0, counter2 = 0;
            while (*str1 != '\0') {
                if (*str1 == currentLetter || *str1 + 32 == currentLetter || *str1 - 32 == currentLetter) {
                    counter1++;
                }
                str1++;
            }
            while (*str2 != '\0') {
                if (*str2 == currentLetter || *str2 + 32 == currentLetter || *str2 - 32 == currentLetter) {
                    counter2++;
                }
                str2++;
            }
            if (counter1 != counter2) {
                return false;
            }
            help++;
        }
        return true;
    }
    return false;
}

//TASK5
double recursiveMultiplication (const double arr[], int length) {
    if (length == 0) {
        return 1;
    }
    if (*arr < *(arr - 1) && *arr > 0) {
        return *arr * recursiveMultiplication(arr + 1, length - 1);
    }
    return recursiveMultiplication(arr + 1, length - 1);
}

//TASK6
// void letterSwap (char* str, int* arr) {
//     if (*str == '\0') {
//         return;
//     }
//     *arr = ((*arr) % 26);
//     if (*str <= 'z' && *str >= 'a') {
//         *str += *arr;
//         if (*str > 'z') {
//             *str -= 26;
//         }
//     }
//     else if (*str < 'Z' && *str > 'A') {
//         *str += *arr;
//         if (*str > 'Z') {
//             *str -= 26;
//         }
//     }
//     else {
//         cout << "Invalid data!" << endl;
//         return;
//     }
//     return letterSwap(str + 1, arr + 1);
// }
void letterSwap(char* str, int arr[]) {
    if(*str == '\0') {
        return;
    }
    //*str <=> str[0]
    bool isSmall = *str >= 'a' && *str <= 'z';
    *str = *str + arr[0] % 26;
    if(*str > 'z' && isSmall) {
        *str -= 26;
    }
    if(*str > 'Z' && !isSmall) {
        *str -= 26;
    }
    letterSwap(++str, ++arr);
}

//TASK7
bool validation (char* str) {
    while (*str) {
        if (*(str + 1) == '\0') {
            if (*str == '.' || *str == '!' || *str == '?' ){
                return true;
            }
        }
        str++;
    }
    cout << "Invalid data!" << endl;
    return false;
}
double averageStr (char* str) {
    int letterCount = 0, wordsCount = 1;
    while (*str) {
        if (*str <= 'z' && *str >= 'a' || *str < 'Z' && *str > 'A') {
            letterCount++;
        }
        else if (*str == ' ') {
            wordsCount++;
//            if (*(str + 1) == *str) {  // this or the while + continue (same result)
//                wordsCount--;
//            }
            while(*str == ' ') {
                str++;
            }
            continue;
        }
        str++;
    }
    return double(letterCount) / wordsCount;
}

//TASK8
char letterSwap (char* str, bool* arr) {
    if (*str == '\0') {
        return *str;
    }
    if ((*str <= 'z' && *str >= 'a') && *arr) {
        *str -= 32;
    }
    return letterSwap(str + 1, arr + 1);
}

//TASK9
char letterToNumber (char* str, const int* arr) {
    if (*str == '\0') {
        return *str;
    }
    if (*str <= 'z' && *str >= 'a') {
        *str = arr[(int)*str - 97] + 48;
    }
    else if (*str < 'Z' && *str > 'A') {
        *str = arr[(int)*str - 65] + 48;
    }
    return letterToNumber(str + 1, arr);
}

//TASK10
//int binaryToDecimal(int n)
//{
//    int num = n;
//    int decimal = 0;
//    int base = 1;
//
//    while (num) {
//        int lastDigit = num % 10;
//        num = num / 10;
//        decimal += lastDigit * base;
//        base *= 2;
//    }
//
//    return decimal;
//}
int binaryToDecimal(int number, int base = 1) {
    if (number == 0) {
        return 0;
    }
    return  (number % 10) * base + binaryToDecimal(number / 10, base * 2);
}
int minBinary (int num) {
    if (num == 1) {
        return 1;
    }
    return 1 + 10 * minBinary(num - 1);
}

//TASK11
void printLetters (char sym) {
    int i = 65;
    while (i <= sym) {
        cout << (char)i << " ";
        i++;
    }
}
void printLettersRecursive (char sym, int A = 65) {
    if(A > sym) {
        return;
    }
    cout << (char)A << ' ';
    printLettersRecursive(sym, ++A);
}
void recursiveDisplay (char sym) {
    if (sym < 65) {
        return;
    }
    printLettersRecursive(sym);
    cout << endl;
    recursiveDisplay(--sym);
}

//TASK12
bool startWith(char* str, char* str1) {
    if(*str1 == '\0') {
        return true;
    }
    bool isStrALetter = (*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z');
    bool isStr1ALetter = (*str1 >= 'a' && *str1 <= 'z') || (*str1 >= 'A' && *str1 <= 'Z');
    if(!isStr1ALetter) {
        return startWith(str, ++str1);
    }
    if(!isStrALetter && *str != '\0') {
        return startWith(++str, str1);
    }
    if(*str != '\0' && (*str == *str1 || *str == *str1 + 32 || *str == *str1 - 32)) {
        return startWith(++str, ++str1);
    }
    return false;

}

int main() {

//    TASK0
//    size_t arr1[5] = {2, 1, 5, 4, 6};
//    size_t arr2[9] = {1, 2, 3, 4, 5, 6, 7, 18, 11};
//    if(isSet(arr1, 5) && isSet(arr2, 10)) {
//        cout << std::boolalpha << (isSubset(arr1, arr2, 5, 9) ? "YES" : "NO")  << endl;
//    }
//    else {
//        cout << "Invalid input!\n";
//    }

//TASK1
//    int size, *arr;
//    cout << "Enter your size: ";
//    cin >> size;
//    arr = createArr(size);
//    cout << std::boolalpha << isZigZag(arr, size) << endl;
//    delete[] arr;

//TASK2
//    int matrix[10][10] = { {4, -5, 2},
//                           {-5, 0, 1},
//                           {2, 1, 8} };
//    int matrix1[10][10] = { {1, 2, 3, 4},
//                            {5, 6, 7, 8},
//                            {9, 0, 0, 0},
//                            {3, 2, 1, -1} };
//    cout << std::boolalpha << isSymmetrical(matrix, 3) << endl;
//    cout << std::boolalpha << isSymmetrical(matrix1, 4) << endl;

//TASK3
//    int matrix[10][10] = { {1, 2, 3},
//                           {4, 5, 6},
//                           {7, 8, 9} };
//    int matrixSum = sum(matrix, 3);
//    cout << matrixSum << " " << (isPowerOfTwo(matrixSum) ? "YES" : "NO") << endl;

//TASK4
//    char str[19] = "A B B A";//"Hi my name is Ilia";//"Astronomer";
//    char str1[19] = "baba"; //"hI name My siAilti";//"Moon starer";
//    cout << std::boolalpha << isAnagram(str, str1) << endl;

//TASK5
//    double arr[8] = {2.1, 3, 9.9, 3, 1, -1, 14.5, 7};
//    cout << recursiveMultiplication(arr + 1, 7) << endl;

//TASK6
//    char str[11] = "LoremIpsum";
//    int arr[10] = {1, 0, 2, 5, 6, 2, 11, 9, 3, 3};
//    letterSwap(str, arr);
//    cout << str << endl;

//TASK7
//    char str[16] = "Lorem  Ipsum.";
//    bool isValid = validation(str);
//    if (isValid) {
//        cout << "The average word length of your string is: " << averageStr(str) << endl;
//    }

//TASK8
//    char str[13] = "Lorem Ip%sum";
//    bool arr[12] = {false, true, true, false, true, true, true, false, true, false, false, false};
//    letterSwap(str, arr);
//    cout << str << endl;

//TASK9
//    char str[11] = "Cauchi";
//    int arr[26] = {3, 5, 0, 3, 3, 7, 6, 5, 1, 1, 7, 2, 3, 9, 0, 5, 2, 5, 2, 7, 5, 7, 4, 9, 7, 7};
//    letterToNumber(str, arr);
//    cout << str << endl;

//TASK10
//    int n = 4;
//    n = minBinary(n);
//    cout << binaryToDecimal(n) << endl;

//TASK11
//    recursiveDisplay('D');

//TASK12
//    char str[10] = "Go to 210";
//    char str1[28] = "GOT!!!";//"GOT!!!!!!!!!!!!!!!!!kkkk!" -> should return false
//    std::cout << std::boolalpha << startWith(str, str1) << std::endl;

    return 0;
}
