#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    //--------------------TASK0---------------------------------
//    int num1, num2;
//    char choice;
//
//    cout << "\nPlease, enter first number: ";
//    cin >> num1;
//
//    cout << "\nPlease, enter second number: ";
//    cin >> num2;
//
//    cout << "\nPlease, choose [+, -, *, /]: ";
//    cin >> choice;
//
//    switch(choice){
//
//        case '+': cout << num1 << " + " << num2 << " = " << num1 + num2;
//        break;
//
//        case '-': cout << num1 << " - " << num2 << " = " << num1 - num2;
//        break;
//
//        case '*': cout << num1 << " * " << num2 << " = " << num1 * num2;
//        break;
//
//        case '/': if(num2 != 0){
//            cout << num1 << " / " << num2 << " = " << num1 / num2;
//            break;
//        }else{
//            cout << "You can't divide by 0!" << endl;
//            break;
//        }
//
//        default: cout << "There is no such action!";
//    }

    //--------------------TASK1---------------------------------
//    char symbol;
//
//    cin >> symbol;
//
//    //Here you can use (symbol >= 'a' && symbol <= 'z')
//    if(symbol >= 97 && symbol <= 122) {
//        cout << "The upper case character corresponding to is " << (char)(symbol - 32);
//
//    } else if(symbol >= 65 && symbol <= 90) { //Here you can use (symbol >= 'A' && symbol <= 'Z')
//        cout << "The lower case character corresponding to is " << (char)(symbol + 32);
//
//    } else{
//        cout << symbol << " is not a letter";
//    }


    //--------------------TASK2---------------------------------

//    int month;
//
//    cin >> month;
//
//    switch(month){
//        case 12:
//        case 1:
//        case 2: cout << "The season is winter!";
//            break;
//        case 3:
//        case 4:
//        case 5: cout << "The season is spring!";
//            break;
//        case 6:
//        case 7:
//        case 8: cout << "The season is summer!";
//            break;
//        case 9:
//        case 10:
//        case 11: cout << "The season is autumn!";
//            break;
//        default: cout << "There is no such season!";
//            break;
//    }

    //--------------------TASK3---------------------------------

//    int a, b;
//    // a*x + b == 0
//
//    cin >> a >> b;
//
//    if (a == 0) {
//        if (b == 0) {
//            cout << "INF" << endl;
//        } else {
//            cout << "No solution" << endl;
//        }
//    } else {
//        cout << -b/a << endl;
//    }


    //--------------------TASK4---------------------------------
//    int month, year;
//
//    cin >> month >> year;
//
//    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//
//    switch (month) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12: cout << 31;
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11: cout << 30;
//            break;
//        case 2: cout << 28 + isLeap;
//            break;
//        default: cout << "Not a month";
//            break;
//    }
//    cout << endl;

    //--------------------TASK5---------------------------------

//    double a, b, c;
//    //ax^2 + bx + c = 0
//
//    cout << "Please enter a: ";
//    cin >> a;
//    cout << "Please enter b: ";
//    cin >> b;
//    cout << "Please enter c: ";
//    cin >> c;
//    if (a == 0) {
//        if (b == 0 && c == 0) {
//            cout << "INF" << endl;
//        } else if(b != 0 && c != 0){
//            cout << "x = " << (-c / b) << endl;
//        } else{
//            cout << "No solution" << endl;
//        }
//    } else {
//        int D = (b * b) - (4 * a * c);
//        if(D > 0) {
//            double x1, x2;
//            x2 = (-b - sqrt(D)) / (2 * a);
//            x1 = (-b + sqrt(D)) / (2 * a);
//            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
//        }
//        else if (D == 0) {
//            cout << "x1 = x2 = " << -b / (2 * a) << endl;
//        }
//        else {
//            cout << "No solution!" << endl;
//        }
//    }


    //--------------------TASK6---------------------------------

//    char character;
//
//    cout << "Please enter a character: ";
//    cin >> character;
//
//    if (character >= '0' && character <= '9') {
//        cout << character << " is a digit!" << endl;
//    }else if (character >= 'A' && character <= 'Z') {
//        cout << character << " is an uppercase letter!" << endl;
//    }else if (character >= 'a' && character <= 'z') {
//        cout << character << " is a lowercase letter!" << endl;
//    }else {
//        cout << character << " is a special symbol!" << endl;
//    }

    //--------------------TASK7---------------------------------
//    int number;
//    bool isEven, isBiggest;
//    cout << "Please enter a neutral 4 digit number: ";
//    cin >> number;
//    if (number < 1000 || number > 9999)
//    {
//        cout << "Invalid number!" << endl;
//    }else {
//        int firstDigit = number / 1000;
//        int secondDigit = number / 100 % 10;
//        int thirdDigit = number / 10 % 10;
//        int fourthDigit = number % 10;
//
//        int max = firstDigit;
//
//        if (secondDigit > max) {
//            max = secondDigit;
//        } else if (thirdDigit > max) {
//            max = thirdDigit;
//        } else if (fourthDigit > max) {
//            max = fourthDigit;
//        }
//        cout << std::boolalpha << "Is the first digit even: " << (firstDigit % 2 == 0) <<
//            "\n Is the first digit the biggest: " << (firstDigit == max) << endl;
//    }

    //--------------------TASK8---------------------------------
//    int tomato, pepper, carrot, olive, potato, flavours;
//    bool hasFriend;
//
//    cout << "Tomatoes: " << endl;
//    cin >> tomato;
//    cout << "Peppers:" << endl;
//    cin >> pepper;
//    cout << "Carrots:" << endl;
//    cin >> carrot;
//    cout << "Olives:" << endl;
//    cin >> olive;
//    cout << "Potatoes:" << endl;
//    cin >> potato;
//    cout << "Flavours:" << endl;
//    cin >> flavours;
//    cout << "Is there a friend:" << endl;
//    cin >> hasFriend;
//
//    bool studentSalad = tomato >= 1 && pepper >= 2 && carrot >= 4 && olive >= 3 && potato >= 3 && flavours >= 150;
//    bool studentSoup = tomato >= 2 && pepper >= 3 && carrot >= 5 && olive >= 6 && potato >= 10 && flavours >= 200;
//    bool studentGuvech = tomato >= 5 && pepper >= 6 && carrot >= 12 && olive >= 7 && potato >= 12 && flavours >= 300;
//
//    bool isGoingToBeFed = studentSalad || ((studentSoup || studentGuvech) && hasFriend);
//    cout << (isGoingToBeFed ? "Yes" : "No") << endl;
    return 0;
}