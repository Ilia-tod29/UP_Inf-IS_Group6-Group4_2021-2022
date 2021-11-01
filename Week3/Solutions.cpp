#include <iostream>

using namespace std;

int main() {

//------------------TASK0-----------------------------------
//    int n, result = 1;
//
//    cin >> n;
//
//    while(n > 0){
//        result *= n;
//        n--;
//    }
//
//    cout << "Result: " << result;

//------------------TASK1-----------------------------------

//    int NFactorial = 1, n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        NFactorial *= i;
//    }
//    cout << "N Factorial: " << NFactorial << endl;

//------------------TASK2-----------------------------------
//    int n;
//
//    cin >> n;
//
//    for(int i = 0; i < n; i++){
//        cout << "a" << i << " = " << i * i + 3 * i << endl;
//    }

//------------------TASK3-----------------------------------

//    int n, number, currentNegativeNumber = INT_MIN;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> number;
//        if (number < 0 && number > currentNegativeNumber) {
//            currentNegativeNumber = number;
//        }
//
//    }
//    cout << currentNegativeNumber << endl;

//------------------TASK4-----------------------------------

//    int a, sum = 0;
//    cout << "Enter your number:" << endl;
//    cin >> a;
//    while(a > 0){
//        sum += a % 10;
//        a /= 10;
//    }
//    cout << "Your sum is: " << sum << endl;

//------------------TASK5-----------------------------------

//    int num, sum = 0;
//
//    do
//    {
//        cin >> num;
//        sum += num;
//    } while (num!=0);
//    cout << sum << endl;

//------------------TASK6-----------------------------------

//    int n, t1 = 0, t2 = 1, nextTerm = 0;
//
//    cin >> n;
//
//    for(int i = 0; i < n; i++){
//        if(i == 1){
//            continue;
//        }
//        if(i == 2){
//            continue;
//        }
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//    }
//
//    cout<<nextTerm;

//------------------TASK7-----------------------------------

//    int a, b;
//    int result = 1;
//
//    cin >> a >> b;
//
//    for (int i = a; i <= b; i++)
//    {
//        result *= i;
//    }
//    cout << "Result: " << result;

//------------------TASK8-----------------------------------

//    int number;
//    cin >> number;
//    bool is_prime = true;
//    if (number <= 1)
//    {
//        is_prime = false;
//    }
//    else
//    {
//        for(int i = 2; i < number / 2; ++i)
//        {
//            if(number % i == 0)
//            {
//                is_prime = false;
//                break;
//            }
//        }
//    }
//    cout << (is_prime ? "yes" : "no") << endl;

//------------------TASK9-----------------------------------

//    int nCols;
//    char firstChar, secondChar;
//
//    cout << "Enter number of columns and two symbols: ";
//    cin >> nCols >> firstChar >> secondChar;
//
//    for (int i = 0; i < nCols - 1; i++)
//    {
//        for (int j = 0; j < nCols; j++)
//        {
//            if (i >= j) cout << firstChar;
//            else if (i < j) cout << secondChar;
//        }
//        cout << endl;
//    }

//------------------TASK10-----------------------------------

//    int number = 0, binary_number = 0, d = 1;
//    cin >> number;
//    if (0 < number && number <= 1000) {
//        while (number != 0) {
//            binary_number += (number % 2) * d;
//            number /= 2;
//            d = d * 10;
//        }
//        cout << binary_number;
//    }
//    else cout << "Wrong number";

    return 0;
}

