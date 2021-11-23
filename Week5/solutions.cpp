#include <iostream>
#include <cmath>

using namespace std;

//-------------------------TASK0----------------------
int fibonacci (int n) {
    int t = 0, t1 = 1, nextTerm = 0;
    for (int i = 0; i <= n; i++) {
        if (i == 1 || i == 2)
            continue;
        nextTerm = t + t1;
        t = t1;
        t1 = nextTerm;
    }
    return nextTerm;
}

//-------------------------TASK1----------------------

bool triangle (double a, double b, double c) {
    return ((a + b > c) && (c + b > a) && (a + c > b));
}

double perimeter (double a, double b, double c) {
    return a + b + c;
}

double area (double a, double b, double c) {
    double p = perimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


//-------------------------TASK2----------------------

int factorial(int n) {
    int temp = 1;
    for (int i = 1; i <= n; i++) {
        temp *= i;
    }
    return temp;
}


//-------------------------TASK3----------------------


int kIinary (int n, int k) {
    if (k < 2 || k > 5) {
        return -1;
    }
    int result = 0;
    int d = 1;
    while (n != 0) {
        result = result + ((n % k) * d);
        d *= 10;
        n /= k;
    }
    return result;
}

//-------------------------TASK4----------------------
bool is_leap_year(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_a_valid_date(int day, int month, int year)
{
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) && day >= 1 && day <=31)
    {
        return true;
    }
    else if (month == 2 && is_leap_year(year) && day >= 1 && day <= 29)
    {
        return true;
    }
    else if (month == 2 && !is_leap_year(year) && day >= 1 && day <= 28)
    {
        return true;
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
    {
        return true;
    }
    return false;
}

//-------------------------TASK5----------------------

    void printPerfect(int n) {
    int sumPerf;
    for (int i = 2; i <= n; ++i) {
        sumPerf = 0;
        for (int j = 1; j < i; ++j) {
            if(i % j == 0) {
                sumPerf += j;
            }
        }
        if(sumPerf == i) {
            cout << i << " \n";
        }
    }
}



//-------------------------TASK6----------------------

bool is_a_palindrome(int number)
{
    if (number < 10)
    {
        return true;
    }
    else
    {
        int temp = number, reversed = 0;
        while (temp > 0)
        {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        return number == reversed;
    }
}

//-------------------------TASK7----------------------

bool isPrimeDivisor(int div) {
    for (int j = 2; j <= div / 2; j++) {
        if (div % j == 0) {
            return false;
        }
    }
    return true;
}

void canonicalForm(int n) {
    for (int i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            bool flag = isPrimeDivisor(i);
            if (flag) cout << i << " ";
        }
    }
}

//-------------------------TASK8----------------------

bool isvalid(int n) {
    while (n > 100)
    {
        if (n % 10 + (n / 10) % 10 != (n / 100) % 10)
            return false;
        n = n / 10;
    }
    return true;
}


//-------------------------TASK9----------------------


int to_binary(int n) {
    int result = 0;
    int d = 1;
    while (n != 0) {
        result = result + ((n % 2) * d);
        d *= 10;
        n /= 2;
    }
    return result;
}



bool does_have_equal_ones_and_zeros(int number)
{
    int zeros = 0, ones = 0, binary_num = to_binary(number);
    while (binary_num > 0)
    {
        if (binary_num % 10 == 0)
        {
            zeros++;
        }
        else
        {
            ones++;
        }
        binary_num /= 10;
    }
    return zeros == ones;
}


void first_twenty_numbers()
{
    int max = 20;
    for (int i = 0; i < max; i++)
    {
        if (does_have_equal_ones_and_zeros(i))
        {
            cout << i << " ";
        }
        else
        {
            max++;
        }
    }
}


//-------------------------TASK10----------------------

int reverse(int n){
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

bool isCorrect(int number) {
    int rev = reverse(number);
    bool isCorrect = true;
    for (int i = 2; i <= rev; i++) {
        if (rev % i == 0) {
            bool flag = isPrimeDivisor(i);//Function from task7
            if (flag && number % i != 0) {
                isCorrect = false;
                break;
            }
        }
    }
    return isCorrect;
}


int main()
{
    //TASK0
//    int n;
//    cin >> n;
//    cout << fibonacci(n) << endl;

    //TASK1
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        double a, b, c;
//        cin >> a >> b >> c;
//        if (triangle(a, b, c)) {
//            cout << perimeter (a, b, c) << endl;
//            cout << area (a, b, c) << endl;
//        }
//        else {
//            cout << "Not a triangle" << endl;
//        }
//    }

    //TASK2
//    int n;
//    cin >> n;
//    cout << factorial(n);


    //TASK3
//    int n, k;
//    cin >> n >> k;
//    if (kIinary(n, k) == -1) {
//        cout << "Invlaid k" << endl;
//    }
//    else {
//        cout << kIinary(n, k) << endl;
//    }

    //TASK4
//    int day, month, year;
//    cin >> day >> month >> year;
//    cout << boolalpha << is_a_valid_date(day,month,year);

    //TASK5
//    int n;
//    cin >> n;
//    printPerfect(n);

    //TASK6
//    int number;
//    cin >> number;
//    cout << boolalpha << is_a_palindrome(number);


    //TASK7
//    int number;
//    cin >> number;
//    canonicalForm(number);

    //TASK8
//    int n;
//    cin >> n;
//    cout << isvalid(n);


    //TASK9
//    first_twenty_numbers();


    //TASK10
//    int n;
//    cin >> n;
//    cout << boolalpha << isCorrect(n) << endl;

    return 0;
}


