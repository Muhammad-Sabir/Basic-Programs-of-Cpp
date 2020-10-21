/* Name:        Muhammad Sabir Raza Attari
   Gmail:       sabir.work07@gmail.com
   Github:      https://github.com/Muhammad-Sabir/Basics-of-C.git
   Facebook:    https://web.facebook.com/computerish */

#include <iostream>
using namespace std;

int main()
{
    string color,pluralnoun,celebrity;

    cout<< "Enter a color: ";
    getline(cin, color);

    cout<< "Enter a plural noun: ";
    getline(cin, pluralnoun);

    cout<< "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are "<< color << endl;
    cout << pluralnoun <<" are red" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}
