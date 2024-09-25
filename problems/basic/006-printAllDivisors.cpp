#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach
void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Optimal Approach
void printAllDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if ((n / i) != i)
            {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (auto n : divisors)
    {
        cout << n << " ";
    }
}

int main()
{
    int n = 36;
    printDivisors(n);
    printAllDivisors(n);
    return 0;
}