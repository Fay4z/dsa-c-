#include <bits/stdc++.h>

using namespace std;

int sumOfN(int num)
{

    if (num <= 0)
        return 0;
    return num + sumOfN(num - 1);
}

int main()
{
    int num = -1;
    int res = sumOfN(num);
    cout << sumOfN(num);
    return 0;
}