/* Name:        Muhammad Sabir Raza Attari
   Gmail:       sabir.work07@gmail.com
   Github:      https://github.com/Muhammad-Sabir/Basics-of-C.git
   Facebook:    https://web.facebook.com/computerish */

#include <iostream>
using namespace std;

int main()
{
    int numGrid[3][2] =
    {
            {1,4},
            {3,5},
            {7,8}
    };

    for(int i = 0; i < 3 ; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << numGrid[i][j];
        }
    cout << endl;
    }

    return 0;
}
