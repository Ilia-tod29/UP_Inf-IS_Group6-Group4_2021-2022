#include <iostream>
#include <cmath>

using namespace std;


bool doesConsistRecursive(char* str, char sym) {
    if(*str == '\0'){
        return false;
    }
    if(*str == sym) {
        return true;
    }
    return doesConsistRecursive(++str, sym);
}

void toUpperCaseRecursive(char* str, char* str1) {
    if(*str == '\0') {
        return;
    }
    if(*str >= 'a' && *str <= 'z' && doesConsistRecursive(str1, *str)) {
        *str -= 32;
    }
    toUpperCaseRecursive(++str, str1);
}


//TASK1

char* pointLongest(char* str) {
    int counter = 0; int maxCounter = 0; int index = 0; int tempIndex = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (counter > maxCounter) {
                maxCounter = counter;
                index = tempIndex;
            }
            tempIndex = i + 1;
            counter = 0; }
        else { counter++; }
        if (str[i + 1] == '\0' && counter > maxCounter) {
            maxCounter = counter;

            index = tempIndex;
        }
    }
    return str + index;
}

//TASK2
bool allIn (char* str, char* str1) {
    if(*str == '\0') {
        return true;
    }
    //    bool doesConsist = false; // Partly iterative
    //    for (int i = 0; str1[i] != '\0' ; ++i) {
    //        if(*str == str1[i]) {
    //            doesConsist = true;
    //            break;
    //        }
    //    }
    if(doesConsistRecursive(str1, *str)) { //Recursive
        return allIn(++str, str1);
    }
    return false;
}

//TASK3

double* createGrades(int n) {
    double* arr1 = new double[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
    }
    return arr1;
}

double averageGrade(double* arr1, int size)
{
    double sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr1[i];
    }
    return ceil((sum / size) * 100.0) / 100.0;
}

//TASK4

void evaluate(const char* str)
{
    int numberCount = 0;
    int upperCaseCount = 0;
    int lowerCaseCount = 0;

    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
            numberCount++;
        else if (*str >= 'A' && *str <= 'Z')
            upperCaseCount++;
        else if (*str >= 'a' && *str <= 'z')
            lowerCaseCount++;

        str++;
    }

    cout << "Lowercase letters: " << lowerCaseCount << "\n"
    << "Uppercase letters: " << upperCaseCount << "\n"
    << "Numbers: " << numberCount << endl;
}


//TASK5

void resize(int*& arr, int& capacity)
{
    int* arr2 = new int[capacity];
    for (int i = 0; i < capacity; i++)
    {
        arr2[i] = arr[i];
    }
    delete[] arr;
    arr = nullptr;
    arr = new int[capacity * 2];
    for (int i = 0; i < capacity; i++)
    {
        arr[i] = arr2[i];
    }
    delete[] arr2;
    arr2 = nullptr;
    capacity *= 2;
}

void pushBack(int*& arr, int& capacity, int& size, int number) {
    if(size == capacity) {
        resize(arr, capacity);
    }
    arr[size] = number;
    size++;
}

//TASK6
void pushFront(int*& arr, int &capacity, int &size, int number)
{
    if (size == capacity)
    {
        resize(arr, capacity);
    }
    for (int i = size + 1; i > 0  ; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = number;
    size++;
}

//TASK7
void removeLastElement(int*& arr, int capacity, int &size)
{
    int* arr2 = new int[capacity];
    for (int i = 0; i < size - 1; i++)
    {
        arr2[i] = arr[i];
    }
    delete[] arr;
    arr = nullptr;
    arr = new int[capacity];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr2[i];
    }
    delete[] arr2;
    arr2 = nullptr;
    size--;
}

int popBack(int*& arr, int capacity, int &size)
{
    int temp = arr[size - 1];
    removeLastElement(arr, capacity, size);
    return temp;
}

//TASK8
int popFront(int*& arr, int capacity, int &size)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    removeLastElement(arr, capacity, size);
    return temp;
}



int main() {

    //TASK0
//    char str[11] = "Hello Fmi!";
//    char str1[11] = "Hello Fi!";
//    toUpperCaseRecursive(str, str1);
//    cout << str << endl;

    //TASK1
//    char str[30] = "Hi, we are from fmi";
//    char* ptrLongest = pointLongest(str);
//    cout << ptrLongest << endl;

    //TASK2
//    cout << boolalpha << allIn("goodbook", "gbkod") << endl;

    //TASK3
//    int n;
//    cin >> n;
//    double *ptrArr = createGrades(n);
//    cout << averageGrade(ptrArr, n) << endl;

    //TASK4
//    evaluate("3 Doors Down");

    //TASK5-8
//    int size, capacity, numToAdd;
//    cin >> capacity >> size >> numToAdd;
//    int* arr = new int[capacity];
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//
//    //Push back
//    pushBack(arr, capacity, size, numToAdd);
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << ", ";
//    }
//    cout << endl;
//
//    // push front
//    pushFront(arr, capacity, size, numToAdd);
//
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    // pop back
//    cout << popBack(arr, capacity , size) << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//    // pop front
//    cout << popFront(arr, capacity, size) << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    delete[] arr;
//    arr = nullptr;


    return 0;
}
