#include <iostream>

using namespace std;

int main() {

    //TASK2

    //    float price;
    //    int usbPorts, RAM;
    //    bool ssd;
    //    cout << "Enter price: ";
    //    cin >> price;
    //    cout << "Enter usb ports: ";
    //    cin >> usbPorts;
    //    cout << "Enter RAM: ";
    //    cin >> RAM;
    //    cout << "Has SSD: ";
    //    cin >> ssd;
    //    bool isBuying = ((price >= 1000 && price <= 1500)
    //                      && usbPorts >= 3 && RAM >= 8 && ssd)
    //                      || (price <= 800 && (!ssd || RAM < 8));
    //    cout << (isBuying ? "YES" : "NO") << endl;


    //TASK3
    //    int number;
    //    bool flag = true;
    //    cout << "Enter a number: ";
    //    cin >> number;
    //    while (number > 10) {
    //        int lastDigit = number % 10;
    //        int temp = number / 10;
    //        while(temp > 0) {
    //            if(temp % 10 == lastDigit) {
    //                flag = false;
    //                break;
    //            }
    //            temp /= 10;
    //        }
    //        if(!flag) {
    //            break;
    //        }
    //        number /= 10;
    //    }
    //    cout << (flag ? "Yes" : "No") << endl;

    //TASK4
    //    int number;
    //    bool flag = true;
    //    cout << "Enter a number: ";
    //    cin >> number;
    //    if(number >= 1000 && number <= 9999) {
    //        int firstDigit = number / 1000;
    //        while (number > 10) {
    //            if (number % 10 >= firstDigit) {
    //                flag = false;
    //            }
    //            number /= 10;
    //        }
    //        cout << ((firstDigit % 2 == 1 && flag) ? "YES" : "NO") << endl;
    //    }
    //    else {
    //        cout << "The number must contain 4 digits.\n";
    //    }

    //TASK5
    //    int number = 0, binary_number = 0, d = 1, counter = 0, maxCounter = 0;
    //    cout << "Enter a number: ";
    //    cin >> number;
    //    while (number != 0) {
    //        binary_number += (number % 2) * d;
    //        number /= 2;
    //        d = d * 10;
    //    }
    //    while (binary_number > 0) {
    //        if(binary_number % 10) {
    //            counter++;
    //        }
    //        else {
    //            if(maxCounter < counter) {
    //                maxCounter = counter;
    //            }
    //            counter = 0;
    //        }
    //        binary_number /= 10;
    //    }
    //    cout << (maxCounter > counter ? maxCounter : counter) << endl;

    //TASK6
    //    int number;
    //    cin >> number;
    //    for (int i = 0; i < number; ++i) {
    //        for (int j = 1; j <= number + number; ++j) {
    //            if (j == number - i)
    //                cout << "/";
    //            else if (j == number + i + 1)
    //                cout << "\\";
    //            else
    //                cout << " ";
    //        }
    //        cout << endl;
    //    }
    //    for (int i = 0; i < number + number; ++i) {
    //        cout << "-";
    //    }
    //    cout << endl;
    //    for (int i = 0; i < number; ++i) {
    //        for (int j = 0; j < number + number; ++j) {
    //            if (j == 0 || j == number + number - 1)
    //                cout << "|";
    //            else
    //                cout << " ";
    //        }
    //        cout << endl;
    //    }
    //    for (int i = 0; i < number + number; ++i) {
    //        cout << "=";
    //    }

    //TASK7
    //    int number;
    //    cin >> number;
    //    if (number >= 1 && number <= 100) {
    //        for (int i = 1; i <= number - 1; ++i) {
    //            for (int j = 1; j <= number; ++j) {
    //                if (j >= i) {
    //                    cout << j;
    //                } else {
    //                    cout << " ";
    //                }
    //            }
    //            cout << endl;
    //        }
    //        for (int i = 0; i < number - 1; ++i) {
    //            cout << " ";
    //        }
    //        cout << number << endl;
    //        for (int i = 1; i <= number - 1; ++i) {
    //            for (int j = 1; j <= number; ++j) {
    //                if (j >= number - i) {
    //                    cout << j;
    //                } else {
    //                    cout << " ";
    //                }
    //
    //            }
    //            cout << endl;
    //        }
    //    }

    //TASK8
    //    int a, b, counter = 0;
    //    cout << "Enter 'a' and 'b' for the [a, b]: ";
    //    cin >> a >> b;
    //    for (int i = a; i <= b; ++i) {
    //        bool flag = true;
    //        int tempI = i;
    //        while (tempI > 10) {
    //            int lastDigit = tempI % 10;
    //            int temp = tempI / 10;
    //            while(temp > 0) {
    //                if(temp % 10 == lastDigit) {
    //                    flag = false;
    //                    break;
    //                }
    //                temp /= 10;
    //            }
    //            if(!flag) {
    //                break;
    //            }
    //            tempI /= 10;
    //        }
    //        if(flag) {
    //            counter++;
    //        }
    //    }
    //    cout << "Numbers with different digits count: " << counter << endl;

    //TASK9
    //    int a, b;
    //    cout << "Enter 'a' and 'b' for the [a, b]: ";
    //    cin >> a >> b;
    //    for (int i = a; i <= b; ++i) {
    //        int temp = i, sum = 0, prod = 1;
    //        while(temp > 0){
    //            sum += temp % 10;
    //            prod *= temp % 10;
    //            temp /= 10;
    //        }
    //        if(sum == prod) {
    //            cout << i << endl;
    //        }
    //    }

    //TASK10
    //    int number;
    //    cin >> number;
    //    for (int i = 0; i < number; ++i) {
    //        for (int j = 0; j < number; ++j) {
    //            if (i == j)
    //                cout << "0";
    //            else if (j > i)
    //                cout << "+";
    //            else
    //                cout << "-";
    //        }
    //        cout << endl;
    //    }

    return 0;
}