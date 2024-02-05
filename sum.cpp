#include <iostream>
#include <string>

using namespace std;

int main()
{

    int firstNumber, secondNumber, total;
    cout << "Enter the First Number : " << endl;
    cin >> firstNumber;
    cout << "Enter the Second Number : " << endl;
    cin >> secondNumber;
    total = firstNumber + secondNumber;
    cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << total;
    return 0;
}