/* Name:        Muhammad Sabir Raza Attari
   Gmail:       sabir.work07@gmail.com
   Github:      https://github.com/Muhammad-Sabir/Basics-of-C.git
   Facebook:    https://web.facebook.com/computerish */

#include <iostream>
using namespace std;

int main()
{
    double secretNum = 7;
    double guess;
    double index = 1;

    cout << "You have three chances to guess a number between 1 and 10. ";

    while(secretNum != guess && index <= 3 )
    {
        cout << "Guess Number: ";
        cin >> guess;
        index++;
    }

    if(secretNum != guess)
    {
        cout << "You lost ";
    }
    else if(guess = secretNum)
    {
    cout << "You won. ";
    }

    return 0;
}
