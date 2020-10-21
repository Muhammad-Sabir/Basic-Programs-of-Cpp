/* Name:        Muhammad Sabir Raza Attari
   Gmail:       sabir.work07@gmail.com
   Github:      https://github.com/Muhammad-Sabir/Basics-of-C.git
   Facebook:    https://web.facebook.com/computerish */

#include <iostream>
using namespace std;

int power(int baseNum, int powNum)
{
    int result = 1;

    for (int i = 1; i <= powNum; i++)
    {
        result = result * baseNum;
    }

    return result;
}

int main()
{
    cout << power(4,2);

    return 0;
}
