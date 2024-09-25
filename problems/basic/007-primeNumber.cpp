#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach
void checkPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "it is not a prime number" << endl;
    }
}

// Optimal Approach
void checkPrimeNumber(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != 1)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "it is not a prime number" << endl;
    }
}

int main()
{
    int n = 11;
    checkPrime(n);
    checkPrimeNumber(n);
    return 0;
}