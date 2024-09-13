#include <bits/stdc++.h>

using namespace std;

void printToN(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << i << " ";
    printToN(i + 1, n);
}

int main()
{
    int n, i = 1;
    cin >> n;
    printToN(i, n);
    return 0;
}