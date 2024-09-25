#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach
int bruteGcd(int n1, int n2)
{
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

// Better Approach
int betterGcd(int n1, int n2)
{
    for (int i = min(n1, n2); i > 0; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }

    return 1;
}

// Optimal Approach
int optimalGcd(int n1, int n2)
{
    // Continue loop as long as both
    // n1 and n2 are greater than 0
    while (n1 > 0 && n2 > 0)
    {
        // If n1 is greater than n2,
        // subtract n2 from n1 and update n1
        if (n1 > n2)
        {
            // Update n1 to the remainder
            // of n1 divided by n2
            n1 = n1 % n2;
        }
        // If n2 is greater than or equal
        // to n1, subtract n1 from n2 and update n2
        else
        {
            // Update n2 to the remainder
            // of n2 divided by n1
            n2 = n2 % n1;
        }
    }
    // Check if n1 becomes 0,
    // if so, return n2 as the GCD
    if (n1 == 0)
    {
        return n2;
    }
    // If n1 is not 0,
    // return n1 as the GCD
    return n1;
}

int main()
{
    int n1 = 10, n2 = 20;
    int bruteRes = bruteGcd(n1, n2);
    int betterRes = betterGcd(n1, n2);
    int optimalRes = optimalGcd(n1, n2);
    cout << bruteRes << endl;
    cout << betterRes << endl;
    cout << optimalRes << endl;
    return 0;
}