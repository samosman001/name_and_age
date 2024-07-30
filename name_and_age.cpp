// Created by Sam Osman
// 07/29/2024
#include <iostream>
using namespace std;

int main()
{
    // Declares and initializes required variables.
    string first_name{"???"};
    double age{-1};

    // Prompts User to enter first name and age.
    cout << "Please enter your first name and age\n";
    cin >> first_name >> age;

    age *= 12;

    // Displays results.
    cout << "Hello, " << first_name << " (" << age << " months old)\n\n";

    return 0;
}