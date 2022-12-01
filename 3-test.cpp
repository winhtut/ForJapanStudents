//
// Created by National Cyber City on 11/29/2022.
//

/*Write function definitions for the following  function protypes. Also write the suitable function call statements.
void getAge(int &years);
void displayAge(int years);
*/
#include<iostream>
using namespace std;
//prototype
void getAge(int &years);
void displayAge(int years);
int main()
{
    int age = 0;
    //function calling
    getAge(age);
    displayAge(age);
    return 0;
}
//function definition
void getAge(int &years)
{
    cout << "Enter the age: ";
    cin >> years;
}
void displayAge(int years)
{
    cout << "Age entered is: " << years;
}