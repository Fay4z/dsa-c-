#include <bits/stdc++.h>

using namespace std;

void printNto1(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printNto1(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n, i = 1;
    cin >> n;
    printNto1(i, n);
    return 0;
}