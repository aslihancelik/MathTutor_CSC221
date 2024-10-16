// MathTutor_CSC221.cpp : This file contains sums two numbers provided by the user 
// while giving them the time they need to make the calculation and check their
// answer once they are ready to do so. The program outputs the sum of two numbers.
//
//
// Programmer: Aslihan Celik
// Datew: 10/12/2024

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

//Returns the number of digits that the number have
int numberDigits(int number)
{
    int digits = 0;
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}

//To print how the summation is 
void printSummation(int maxWidth, int number1, int number2) {

    cout << right << setw(maxWidth) << number1 << endl;
    cout << left << "+" << setw(maxWidth - 1) << right << number2 << endl;
    for (int i = 0; i <= maxWidth; i++) {
        cout << "-";
    }
    cout << endl;
}


int main()
{
    int number1, number2, sum;

    cout << "Please enter the first value you would like to use in summation:" << endl;
    cin >> number1;
    cout << "Please enter the first value you would like to use in summation:" << endl;
    cin >> number2;

    // Determine the maximum width based on the larger number
    int maxNumber = max(number1, number2);
    int maxWidth = numberDigits(maxNumber) + 1;  // Adding 1 for the '+' sign alignment

    cout << "The summation of the two numbers you entered will look like follows:" << endl;
    printSummation(maxWidth, number1, number2);
 
   
    // Pause to allow student time to solve
    cout << "When you are ready, hit enter to see the answer..." << endl;
    cin.ignore();  // To ignore any newline left from previous inputs
    cin.get();     // Wait for the user to press a key

    // Show the correct solution
    cout << "The answer is: " << endl << endl;
    //sum the two numbers
    sum = number1 + number2;
    printSummation(maxWidth, number1, number2);

    //output the sum of the two numbers
    cout << setw(maxWidth) << right << sum << endl;

    return 0;
}

