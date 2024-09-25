#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 12345;
    int count = 0;
    while (num > 0)
    {
        count += 1;
        num = num / 10;
    }

    cout << count;
    return 0;
}