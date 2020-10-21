/* Name:        Muhammad Sabir Raza Attari
   Gmail:       sabir.work07@gmail.com
   Github:      https://github.com/Muhammad-Sabir/Basics-of-C.git
   Facebook:    https://web.facebook.com/computerish */

#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    int *page = &age;
    double gpa = 2.7;
    double *pgpa = &gpa;
    string name = "Mile";
    string *pname = &name;

    cout << *page << endl;
    cout << *pgpa << endl;
    cout << *pname << endl;

    return 0;
}
