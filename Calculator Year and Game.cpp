/* Name:        Muhammad Sabir Raza Attari
   Gmail:       sabir.work07@gmail.com
   Github:      https://github.com/Muhammad-Sabir/Basics-of-C.git
   Facebook:    https://web.facebook.com/computerish */

#include <iostream>
using namespace std;

string getYearName(int yearNum)
{
    string yearName;
    switch(yearNum)
    {
        case 1:
            yearName = "January";
            break;

        case 2:
            yearName = "February";
            break;

        case 3:
            yearName = "March";
            break;

        case 4:
            yearName = "April";
            break;

        case 5:
            yearName = "May";
            break;

        case 6:
            yearName = "June";
            break;

        case 7:
            yearName = "July";
            break;

        case 8:
            yearName = "August";
            break;

        case 9:
            yearName = "September";
            break;

        case 10:
            yearName = "October";
            break;

        case 11:
            yearName = "November";
            break;

        case 12:
            yearName = "December";
            break;

        default:
            yearName = "Invalid year number.";
    }

    return yearName;
}

int main()
{
    char service;

    cout << "Hello and welcome. \n";
    cout << "We provide the services of calculator, year numbers to their names and small fun games. \n";
    cout << "What would you like to do? \n";
    cout << "For calculator, write 'C' \n";
    cout << "For year name, write 'Y' \n";
    cout << "For game, write 'G': ";

    cin >> service;

    if (service == 'C' || service == 'c')
    {
        double num1 , num2;
        char operation;

        cout << "Write your first number: ";
        cin >> num1;
        cout << "Write 2nd number: ";
        cin >> num2;

        cout << "For addition, write '+' \n";
        cout << "For substraction, write '-' \n";
        cout << "For multiplication, write '*' \n";
        cout << "For division, write '/' \n";
        cin >> operation;

        if(operation == '+')
        {
            cout << num1 + num2;
        }
        else if(operation == '-')
        {
            cout << num1 - num2;
        }
        else if(operation == '*')
        {
            cout << num1 * num2;
        }
        else if(operation == '/')
        {
            cout << num1 / num2;
        }
        else
        {
            cout << "Invalid Operation. ";
        }
    }
    else if(service == 'Y' || service == 'y')
    {
        int yearNumber;

        cout << "Write year number: ";
        cin >> yearNumber;
        cout << getYearName(yearNumber) ;
    }
    else if(service == 'G' || service == 'g')
    {
        string agreement;

        cout << "This so called game has following steps and you have to follow them in your mind. \n";
        cout << "1. Think of a number. \n";
        cout << "2. Double it. \n";
        cout << "3.Add 10 to the number. \n";
        cout << "4.Remove your original number. \n";
        cout << "Write 'Done' if you are done. ";
        cin >> agreement;
        cout << "Your answer is 5. ";
    }
    else
    {
        cout<<"Incorrect word.";
    }

    return 0;
}
