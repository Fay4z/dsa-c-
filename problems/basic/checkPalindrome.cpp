#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 505, temp = num;
    int rev = 0, lastDigit;

    while (num > 0)
    {
        lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num = num / 10;
    }

    if (temp = rev)
    {
        cout << temp << " is palindrome";
    }
    else
    {
        cout << temp << " is not palindrome";
    }

    return 0;
}