/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Doyon
 */

#include <iostream>
#include "Const.cpp"
using namespace std;


int main()
{
    int a = 100;
    int b = 100;
    int c;

    c = add(a, b);
    cout << "The sum is " << c << "." << endl;

    c = subtract(a, b);
    cout << "The difference is " << c << "." << endl;

    c = multiply(a, b);
    cout << "The product is " << c << "." << endl;

    c = divide(a, b);
    cout << "The quotient is " << c << "." << endl;

    return 0;
}